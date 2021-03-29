#include "../includes/ft_printf.h"

int        ft_print_uint(t_flags *value, t_print *print, int base, int cap)
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
        if (value->dot)
        {
            if (value->width - ft_max(value->precision, print->size) > 0)
                ft_print_space(value->width - ft_max(value->precision, print->size));
            if (value->precision > print->size)
                ft_print_zero(value->precision - print->size);
        }
        if (!value->dot && !value->zero && value->width - print->size > 0)
            ft_print_space(value->width - print->size);
        if (!value->dot && value->zero && value->width - print->size > 0)
            ft_print_zero(value->width - print->size);
        ft_puthex_fd(print->u, 1, base, cap);
    }
    return (ft_max(value->width, ft_max(value->precision, print->size)));
}