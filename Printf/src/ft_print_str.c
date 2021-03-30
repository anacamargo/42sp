/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:19:21 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/30 02:39:56 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_str(t_flags *value, t_print *print)
{
	if (value->dot)
	{
		if (value->minus)
			ft_putstr_fd(ft_substr(print->s, 0, value->prec), 1);
		if (value->width - ft_min(value->prec, print->size) > 0)
			ft_print_space(value->width - ft_min(value->prec, print->size));
		if (!value->minus)
			ft_putstr_fd(ft_substr(print->s, 0, value->prec), 1);
		return (ft_max(value->width, ft_min(value->prec, print->size)));
	}
	else
	{
		if (value->minus)
			ft_putstr_fd(print->s, 1);
		if (value->width - print->size > 0)
		{
			if (value->zero && !value->minus)
				ft_print_zero(value->width - print->size);
			else
				ft_print_space(value->width - print->size);
		}
		if (!value->minus)
			ft_putstr_fd(print->s, 1);
		return (ft_max(value->width, print->size));
	}
}
