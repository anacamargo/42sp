#include "../includes/ft_printf.h"

static	void	print_space(int n)
{
	while (n--)
		ft_putchar_fd(' ', 1);
}

static	void	print_zero(int n)
{
	while (n--)
		ft_putchar_fd('0', 1);
}

int		ft_put(t_flags *value, t_print *print)
{
	if (value->width - ft_max(value->precision, print->size) > 0)
		print_space(value->width - ft_max(value->precision, print->size));
	if (value->precision - print->size > 0)
		print_zero(value->precision - print->size);
	ft_putnbr_fd(print->d, 1);
	return (0);
}


// "%10.5d", 83

// |     00083|

// WIDTH - MAX(PREC, SIZE_PRINT)
// PREC - SIZE_PRINT > 0

// |     ||000||83|

// SIZE_PRINT: 
// c, s

// d (NEG) 

// u, x, X  /(base)  

// p (0x)
// /(base)