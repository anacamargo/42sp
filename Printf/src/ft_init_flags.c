/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 02:08:22 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/26 23:05:14 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

t_flags *ft_init_flags(t_flags *flag)
{
	flag->index = 0;
	flag->dot = 0;
	flag->minus = 0;
	flag->precision = 0;
	flag->star = 0;
	flag->width = 0;
	flag->zero = 0;
	return (flag);
}
