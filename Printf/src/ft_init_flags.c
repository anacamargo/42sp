/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacamargo <anacamargo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:01:37 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 16:41:45 by anacamargo       ###   ########.fr       */
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
