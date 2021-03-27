/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 04:07:34 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 20:27:45 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"
# include <stdio.h>



void ft_select_conversion(char c, t_flags *value, t_print *print)
{
	print->type = c;
	if (c == 'c' || c == '%')
		print->c = (char)va_arg(value->args, int);
	else if (c == 's')
		print->s = va_arg(value->args, char *);
	else if (c == 'd' || c == 'i')
		print->d = va_arg(value->args, int);
	else if (c == 'u')
		print->u = va_arg(value->args, unsigned int);
	else if (c == 'x' || c == 'X')
		print->x = va_arg(value->args, unsigned int);
	else if (c == 'p')
		print->p = va_arg(value->args, uintptr_t);
}
