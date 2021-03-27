/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 04:07:34 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 00:16:26 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"
# include <stdio.h>

// void ft_check_flags(char *format, t_flags *value)
// {
// 	t_flags i;

// 	if (format[value->index] == "-")
// 		format[value->minus] = 1;
// 	else if (format[value->index] == "0")
// 		format[value->zero] = 1;
// 	else if (format[value->index] == "*")
// 		format[value->star] = 1;
// 	else if (format[value->index] == ".")
// 		format[value->dot] = 1;
// 	format[value->index++];
// 	ft_select_conversion(format, value);
// }

void ft_select_conversion(char c, t_flags *value)
{
	// "%010d", 8 -> |0000000008|
	if (c == 'c')
		ft_putchar_fd((char)va_arg(value->args, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(value->args, char *), 1);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(value->args, int), 1);
	else if (c == 'u')
		ft_puthex_fd(va_arg(value->args, unsigned int), 1, 10, 0);
	else if (c == 'x')
		ft_puthex_fd(va_arg(value->args, unsigned int), 1, 16, 0);
	else if (c == 'X')
		ft_puthex_fd(va_arg(value->args, unsigned int), 1, 16, 1);
	else if (c == 'p')
		ft_putptr_fd(va_arg(value->args, uintptr_t), 1);
}
