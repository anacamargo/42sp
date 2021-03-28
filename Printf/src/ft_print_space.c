#include "../includes/ft_printf.h"

void	ft_print_space(int n)
{
	while (n--)
		ft_putchar_fd(' ', 1);
}
