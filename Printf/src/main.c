# include "../includes/ft_printf.h"

int size_num (size_t num, int base)
{
	int i;

	i = 1;
	if (num == 0)
		return (1);
	while ((num /= base) >= 1)
		i++;
	return (i);
}

// static	int	size_i(int num)
// {
// 	int i;

// 	i = 1;
// 	if (num == 0)
// 		return (1);
// 	while ((num /= 10) >= 1)
// 		i++;
// 	return (i);
// }

int main()
{
	printf("%d\n", size_num(102, 10));
}
if (print->type == 'd' && print->d == -2147483648)
	print->size = 11;
else if (print->type == 'd' && print->d < 0)
	print->size = 1 + size_num(print->d, 10);
else if (print->type == 'd')
	print->size = size_num(print->d, 10);
else if (print->type == 'u')
	print->size = size_num(print->u, 10);
else if (print->type == 'x' || print->type == 'X')
	print->size = size_num(print->x, 16);
else if (print->type == 'p')
	print->size = size_num(print->p, 16);

