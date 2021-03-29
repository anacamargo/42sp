/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:16:51 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 00:28:12 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	int	ft_print_ptr_zero(t_flags *value, t_print *print)
{
	ft_putstr_fd("0x\0", 1);
	if (value->width - print->size > 0)
		ft_print_zero(value->width - print->size);
	ft_putptr_fd(print->p, 1);
	return (ft_max(value->width, ft_max(value->prec + 2, print->size)));
}

static int	ft_print_ptr_not_zero(t_flags *value, t_print *print)
{
	if (value->width - print->size > 0)
			ft_print_space(value->width - print->size);
		ft_putstr_fd("0x\0", 1);
		ft_putptr_fd(print->p, 1);
		return (ft_max(value->width, ft_max(value->prec + 2, print->size)));
}

static	int	ft_print_ptr_minus_dot(t_flags *value, t_print *print)
{
	if (value->dot && (value->width - print->size > 0))
		ft_print_space(value->width - print->size);
	ft_putstr_fd("0x\0", 1);
	if (value->dot && (value->prec - (print->size - 2) > 0))
		ft_print_zero(value->prec - (print->size - 2));
	ft_putptr_fd(print->p, 1);
	if (value->minus && (value->width - print->size > 0))
		ft_print_space(value->width - print->size);
	return (ft_max(value->width, ft_max(value->prec + 2, print->size)));
}

int	ft_print_ptr(t_flags *value, t_print *print)
{
	int i;

	i = 0;
	if (!value->minus && !value->dot && value->zero)
		i += ft_print_ptr_zero(value, print);
	else if (!value->minus && !value->dot && !value->zero)
		i += ft_print_ptr_not_zero(value, print);
	else if (value->minus || value->dot)
		i += ft_print_ptr_minus_dot(value, print);
	return (i);
}
