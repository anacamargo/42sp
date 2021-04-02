/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:01:37 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/02 20:49:15 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_print_ptr_zero(t_flags *value, t_print *print)
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

static int	ft_print_ptr_minus_dot(t_flags *value, t_print *print)
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

int			ft_print_ptr(t_flags *value, t_print *print)
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
