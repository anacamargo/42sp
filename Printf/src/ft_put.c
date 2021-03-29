/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:22:13 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 00:15:53 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	void	deal_null_int_values(t_print **print, t_flags **value)
{
	if ((((*print)->type == 'd' || (*print)->type == 'i') && (*print)->d == 0) \
		|| (((*print)->type == 'u' || (*print)->type == 'x' || \
		(*print)->type == 'X') && (*print)->u == 0))
	{
		(*print)->type = 's';
		(*print)->s = "\0";
		(*print)->size = 0;
	}
	else if ((*print)->type == 'p' && (*print)->p == 0)
	{
		(*print)->type = 's';
		(*print)->s = "0x\0";
		(*print)->size = 2;
		(*value)->prec = 2;
	}
}

int				ft_put(t_flags *value, t_print *print)
{
	int i;

	i = 0;
	if (value->prec < 0)
		value->dot = 0;
	if (value->dot && value->prec == 0)
		deal_null_int_values(&print, &value);
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
	else if (print->type == 'p')
		i += ft_print_ptr(value, print);
	return (i);
}
