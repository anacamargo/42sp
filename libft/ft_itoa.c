/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:25:31 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/24 23:27:52 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		length(long	n)
{
	int i;

	i = 1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	reverse(char *str)
{
	int 	i;
	int		j;
	char	s;

	i = 0;
	j = ft_strlen(str);
	while (i < j)
	{
		s = str[i];
		str[i] = str[j];
		str[j] = s;
	}
}


char	*ft_itoa(int n)
{
	int			i;
	long		num;
	char		*str;
	int			is_negative;

	num = n;
	is_negative = num < 0 ? 1 : 0;
	str = (char*)malloc((is_negative + length(num)) * sizeof(char));
	i = 0;

	if (!str)
		return (NULL);
	while (num > 0)
	{	
		str[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	if (num == 0)
		str[i] = '0';
	if (is_negative == 1)
		str[i] = '-';
	i++;
	str[i] = '\0';
	
	reverse(str);
	return (str);
}

// int main (void)
// {
// 	int 	n;

// 	n =  1;
// 	printf("teste%s", ft_itoa(n));
// 	return (0);
// }