/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 02:08:22 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 20:46:40 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

void	ft_init_struct(t_flags *flag)
{
	flag->index = 0;
	flag->dot = 0;
	flag->minus = 0;
	flag->precision = 0;
	flag->width = 0;
	flag->zero = 0;
	flag->count = 0;
	flag->total = 0;
}
