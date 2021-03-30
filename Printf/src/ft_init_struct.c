/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 02:08:22 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/30 02:41:00 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_init_struct(t_flags *flag)
{
	flag->dot = 0;
	flag->minus = 0;
	flag->prec = 0;
	flag->width = 0;
	flag->zero = 0;
	flag->count = 0;
}
