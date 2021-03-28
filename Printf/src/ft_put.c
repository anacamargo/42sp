#include "../includes/ft_printf.h"

int		ft_print_char(t_flags *value, t_print *print)
{
	if (value->minus)
		ft_putchar_fd(print->c, 1);
	if (value->width - print->size > 0)
		ft_print_space(value->width - print->size);
	if (!value->minus)
		ft_putchar_fd(print->c, 1);
	return (ft_max(value->width, print->size));
}

int		ft_print_str(t_flags *value, t_print *print)
{
	if (value->dot)
	{
		if (value->minus)
			ft_putstr_fd(ft_substr(print->s, 0, value->precision), 1);
		if (value->width - ft_min(value->precision, print->size) > 0)
			ft_print_space(value->width - ft_min(value->precision, print->size));
		if (!value->minus)
			ft_putstr_fd(ft_substr(print->s, 0, value->precision), 1);
	}
	else
	{
		if (value->minus)
			ft_putstr_fd(print->s, 1);
		if (value->width - print->size > 0)
			ft_print_space(value->width - print->size);
		if (!value->minus)
			ft_putstr_fd(print->s, 1);
	}
	return ((value->dot) ? ft_max(value->width, ft_min(value->precision, \
		print->size)) : ft_max(value->width, print->size));
}

int		ft_print_uint(t_flags *value, t_print *print, int base, int cap)
{
	if (value->minus)
	{
		if (value->precision > print->size)
			ft_print_zero(value->precision - print->size);
		ft_puthex_fd(print->u, 1, base, cap);
		if (value->width - ft_max(value->precision, print->size) > 0)
			ft_print_space(value->width - ft_max(value->precision, print->size));
	}
	else
	{
		if (value->zero)
			if (value->width - ft_max(value->precision, print->size) > 0)
				ft_print_zero(value->width - ft_max(value->precision, print->size));
		if (!value->zero)
			if (value->width - ft_max(value->precision, print->size) > 0)
				ft_print_space(value->width - ft_max(value->precision, print->size));
		if (value->precision > print->size)
			ft_print_zero(value->precision - print->size);
		ft_puthex_fd(print->u, 1, base, cap);
	}
	return (ft_max(value->width, ft_max(value->precision, print->size)));
}


int		ft_put(t_flags *value, t_print *print)
{
	int i;
	i = 0;

	if (print->type == 'c')
		i += ft_print_char(value, print);
	else if (print->type == 's')
		i += ft_print_str(value, print);
	else if (print->type == 'd' || print->type == 'i')
		i += ft_print_int(value, print);
	else if (print->type == 'u')
		i += ft_print_uint(value, print, 10, 0);
	else if (print->type == 'x')
		i += ft_print_uint(value, print, 16, 0);
	else if (print->type == 'X')
		i += ft_print_uint(value, print, 16, 1);
	// else if (print->type == 'p')
	// 	i += ft_print_ptr(value, print);
	return (i);
}
