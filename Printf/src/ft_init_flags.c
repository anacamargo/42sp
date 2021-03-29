/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 02:08:22 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 04:13:27 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags	*ft_init_flags(t_flags *flag)
{
	flag->index = 0;
	flag->dot = 0;
	flag->minus = 0;
	flag->prec = 0;
	flag->width = 0;
	flag->zero = 0;
	return (flag);
}
