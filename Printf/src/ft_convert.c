/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 04:07:34 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/26 02:16:31 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"
# include <stdio.h>

void ft_check_flags(char *format, t_flags *value)
{
	t_flags i;

	if (format[value->index] == "-")
		format[value->minus] = 1;
	else if (format[value->index] == "0")
		format[value->zero] = 1;
	else if (format[value->index] == "*")
		format[value->star] = 1;
	else if (format[value->index] == ".")
		format[value->dot] = 1;
	format[value->index++];
	ft_select_conversion(format, value);
}

void ft_select_conversion(char *format, t_flags *value)
{
	if (format[value->index] == "c")
		ft_convert_to_c(format, value);
	if (format[value->index] == "s")
		ft_convert_to_s(format, value);
	if (format[value->index] == "p")
		ft_convert_to_p(format, value);
	if (format[value->index] == "d" || format[value->index] == "i" || format[value->index] == "u")
		ft_convert_to_nb(format, value);
	if (format[value->index] == "x" || format[value->index] == "X")
		ft_convert_to_x(format, value);
}
