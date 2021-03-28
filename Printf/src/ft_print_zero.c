# include "../includes/ft_printf.h"

void	ft_print_zero(int n)
{
	while (n--)
		ft_putchar_fd('0', 1);
}
