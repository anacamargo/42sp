# include "../includes/ft_printf.h"

static    int    is_printf_flags(int c)
{
    if (ft_isdigit(c) || c == '-' || c == '.' || c == '*')
        return (1);
    return (0);
}

static    int    is_printf_type(int c)
{
    if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' || c == 'x' \
        || c == 'X' || c == 'p' || c == '%')
        return (1);
    return (0);
}

int        ft_printf(const char *format, ...)
{
    t_flags    value;
    t_print print;

    value.index = 0;
    value.total = 0;
    va_start(value.args, format);
    while (format && format[value.index])
    {
        if (format[value.index] == '%')
        {
            value.index++;
            value.count = 0;
            ft_init_struct(&value);
            while (is_printf_flags(format[value.index]))
            {
                value.count++;
                value.index++;
            }
            if (value.count)
                ft_check_flags(ft_substr(format, (value.index - value.count), \
                    value.count + 1), &value);
            if (format[value.index] && is_printf_type(format[value.index]))
                ft_select_conversion(format[value.index], &value, &print);
            else
                return (value.total);
            value.total += ft_put(&value, &print);
        }
        else
        {
            ft_putchar_fd(format[value.index], 1);
            value.total++;
        }
        value.index++;
    }
    va_end(value.args);
    return (value.total);
}
