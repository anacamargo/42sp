/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:11:12 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/02 20:49:15 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_char(t_flags *value, t_print *print)
{
	if (value->minus)
		ft_putchar_fd(print->c, 1);
	if (value->width - print->size > 0)
	{
		if (print->c == '%' && value->zero && !value->minus)
			ft_print_zero(value->width - print->size);
		else
			ft_print_space(value->width - print->size);
	}
	if (!value->minus)
		ft_putchar_fd(print->c, 1);
	return (ft_max(value->width, print->size));
}
