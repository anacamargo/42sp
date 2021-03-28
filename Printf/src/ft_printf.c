/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 04:31:46 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 22:21:34 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

static	int	is_printf_flags(int c)
{
	if (ft_isdigit(c) || c == '-' || c == '.' || c == '*')
		return (1);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_flags	value;
	t_print print;

	ft_init_struct(&value);
	va_start(value.args, format);
	while (format && format[value.index])
	{
		if (format[value.index] == '%')
		{
			value.index++;
			value.count = 0;
			while (is_printf_flags(format[value.index]))
			{
				value.count++;
				value.index++;
			}
			if (value.count)
				ft_check_flags(ft_substr(format, (value.index - value.count), \
					value.count + 1), &value);
			ft_select_conversion(format[value.index], &value, &print);

			/* -------------------------------------------------------------- */
			/* ------------------------- TEST FLAGS ------------------------- */
			/* -------------------------------------------------------------- */
			// printf("index: %d\n", value.index);
			// printf("count: %d\n", value.count);
			// printf("dot: %d\n", value.dot);
			// printf("minus: %d\n", value.minus);
			// printf("precision: %d\n", value.precision);
			// printf("width: %d\n", value.width);
			// printf("zero: %d\n", value.zero);
			/* -------------------------------------------------------------- */
			/* -------------------------------------------------------------- */

			value.count += ft_put(&value, &print);
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
