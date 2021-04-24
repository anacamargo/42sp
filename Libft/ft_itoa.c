#include "libft.h"

static	int	ft_length_num(long int num)
{
	int	i;

	i = 1;
	if (num == 0)
		return (1);
	num /= 10;
	while (num >= 1)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	num;
	char	*str;
	int		is_negative;

	num = n;
	is_negative = num < 0 ? 1 : 0;
	num *= is_negative ? -1 : 1;
	str = (char *)malloc((is_negative + ft_length_num(num) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = is_negative ? (ft_length_num(num) + 1) : ft_length_num(num);
	str[i--] = '\0';
	if (num == 0)
		str[i--] = '0';
	while (num > 0)
	{
		str[i--] = (num % 10) + '0';
		num = num / 10;
	}
	if (is_negative)
		str[i] = '-';
	return (str);
}
