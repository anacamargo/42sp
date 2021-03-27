/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 04:31:46 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/26 02:41:13 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_flags	value;

	ft_init_flags(&value);
	va_start(value.args, format);
	while (format && format[value.index])
	{
		if (format[value.index] == '%')
		{
			value.index++;
			// ft_select_conversion(format, &value);
		}
		else
		{
			ft_putchar_fd(format[value.index], 1);
		}
		value.index++;
	}
	va_end(value.args);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


t_flags *ft_init_flags(t_flags *flag)
{
	flag->index = 0;
	flag->dot = 0;
	flag->minus = 0;
	flag->precision = 0;
	flag->star = 0;
	flag->width = 0;
	flag->zero = 0;
	return (flag);
}

// int *ft_check_flags(char *format, t_flags *value)
// {
// 	if (format[value->index] == "-")
// 		value->minus = 1;
// 	else if (format[value->index] == "0")
// 		value->zero = 1;
// 	else if (format[value->index] == "*")
// 		value->star = 1;
// 	else if (format[value->index] == ".")
// 		value->dot  = 1;
// 	return (0);
// }

// void ft_select_conversion(char *format, t_flags *value)
// {
	// ft_check_flags(format, value);
	// if (format[value->index] == "c")
	// 	ft_convert_to_c(format, value);
	// if (format[value->index] == "s")
	// 	ft_convert_to_s(format, value);
	// if (format[value->index] == "p")
	// 	ft_convert_to_p(format, value);
	// if (format[value->index] == "d" || format[value->index] == "i" || format[value->index] == "u")
	// 	ft_convert_to_nb(format, value);
	// if (format[value->index] == "x" || format[value->index] == "X")
	// 	ft_convert_to_x(format, value);
// }

int main()
{
	ft_printf("Teste!");
	// ft_printf("%s %d %s", "teste", 100, "times");
	return(0);
}
