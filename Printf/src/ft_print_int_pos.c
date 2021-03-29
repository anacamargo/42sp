/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_pos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:11:44 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 04:16:14 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_int_pos(t_flags *value, t_print *print)
{
	if (value->minus)
	{
		if (value->prec > print->size)
			ft_print_zero(value->prec - print->size);
		ft_putnbr_fd(print->d, 1);
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
		ft_putnbr_fd(print->d, 1);
	}
	return (ft_max(value->width, ft_max(value->prec, print->size)));
}

int	ft_print_int_neg(t_flags *value, t_print *print)
{
	if (value->minus || value->dot)
	{
		if (!value->minus)
			if (value->width - ft_max(value->prec, print->size) > 0)
				ft_print_space(value->width - \
				ft_max(value->prec + 1, print->size + 1));
		ft_putchar_fd('-', 1);
		if (value->prec > print->size)
			ft_print_zero(value->prec - print->size);
		ft_putnbr_fd((long int)print->d * -1, 1);
		if (value->minus)
			if (value->width - ft_max(value->prec, print->size) > 0)
				ft_print_space(value->width - \
				ft_max(value->prec + 1, print->size + 1));
		return (ft_max(value->width, ft_max(value->prec + 1, print->size + 1)));
	}
	if (!value->minus && !value->dot)
	{
		if (value->zero)
		{
			ft_putchar_fd('-', 1);
			if (value->width - (print->size + 1) > 0)
				ft_print_zero(value->width - (print->size + 1));
		}
		else
		{
			if (value->width - (print->size + 1) > 0)
				ft_print_space(value->width - (print->size + 1));
			ft_putchar_fd('-', 1);
		}
		ft_putnbr_fd(((long int)print->d * -1), 1);
	}
	return (ft_max(value->width, ft_max(value->prec + 1, print->size + 1)));
}
