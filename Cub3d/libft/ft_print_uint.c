/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:20:30 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/02 20:49:15 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_uint(t_flags *value, t_print *print, int base, int cap)
{
	if (value->minus)
	{
		if (value->prec > print->size)
			ft_print_zero(value->prec - print->size);
		ft_puthex_fd(print->u, 1, base, cap);
		if (value->width - ft_max(value->prec, print->size) > 0)
			ft_print_space(value->width - ft_max(value->prec, print->size));
	}
	else
	{
		if (value->dot)
		{
			if (value->width - ft_max(value->prec, print->size) > 0)
				ft_print_space(value->width - ft_max(value->prec, print->size));
			if (value->prec > print->size)
				ft_print_zero(value->prec - print->size);
		}
		if (!value->dot && !value->zero && value->width - print->size > 0)
			ft_print_space(value->width - print->size);
		if (!value->dot && value->zero && value->width - print->size > 0)
			ft_print_zero(value->width - print->size);
		ft_puthex_fd(print->u, 1, base, cap);
	}
	return (ft_max(value->width, ft_max(value->prec, print->size)));
}
