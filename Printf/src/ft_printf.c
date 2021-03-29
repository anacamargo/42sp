/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacamargo <anacamargo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:01:37 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 16:51:42 by anacamargo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		is_printf_flags(int c)
{
	if (ft_isdigit(c) || c == '-' || c == '.' || c == '*')
		return (1);
	return (0);
}

static int		is_printf_type(int c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' || c == 'x' \
		|| c == 'X' || c == 'p' || c == '%')
		return (1);
	return (0);
}

static	void	search_flags(t_flags *value, const char *format)
{
	value->index++;
	value->count = 0;
	while (is_printf_flags(format[value->index]))
	{
		value->count++;
		value->index++;
	}
}

static	void	init_count_index(t_flags *value)
{
	value->index = 0;
	value->total = 0;
}

int				ft_printf(const char *format, ...)
{
	t_flags	value;
	t_print print;

	init_count_index(&value);
	va_start(value.args, format);
	while (format && format[value.index])
	{
		if (format[value.index] == '%')
		{
			ft_init_struct(&value);
			search_flags(&value, format);
			if (value.count)
				ft_check_flags(format, &value);
			if (format[value.index] && is_printf_type(format[value.index]))
				ft_select_conversion(format[value.index], &value, &print);
			else
				return (value.total);
			value.total += ft_put(&value, &print);
		}
		else
			value.total += ft_putchar_fd(format[value.index], 1);
		value.index++;
	}
	va_end(value.args);
	return (value.total);
}
