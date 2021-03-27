# include "../includes/ft_printf.h"

int size_ud (size_t num, int base)
{
	int i;

	i = 1;
	if (num == 0)
		return (1);
	while ((num /= base) >= 1)
		i++;
	return (i);
}

int main()
{
	printf("%d\n", size_ud(0xb1a, 16));
}

