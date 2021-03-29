int        ft_print_ptr(t_flags *value, t_print *print)
{
    if (value->minus || value->dot)
    {
        if (value->dot && (value->width - print->size > 0))
            ft_print_space(value->width - print->size);
        ft_putstr_fd("0x\0", 1);
        if (value->dot && (value->precision - (print->size - 2) > 0))
            ft_print_zero(value->precision - (print->size - 2));
        ft_putptr_fd(print->p, 1);
        if (value->minus && (value->width - print->size > 0))
            ft_print_space(value->width - print->size);
    }
    else if (!value->minus && !value->dot && value->zero)
    {
        ft_putstr_fd("0x\0", 1);
        if (value->width - print->size > 0)
            ft_print_zero(value->width - print->size);    
        ft_putptr_fd(print->p, 1);
    }
    else if (!value->minus && !value->dot && !value->zero)
    {
        if (value->width - print->size > 0)
            ft_print_space(value->width - print->size);
        ft_putstr_fd("0x\0", 1);
        ft_putptr_fd(print->p, 1);
    }
    return (ft_max(value->width, ft_max(value->precision + 2, print->size)));
}