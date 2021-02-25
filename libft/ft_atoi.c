/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:10:00 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/25 03:33:17 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int i;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+' || nptr[i] == ' ')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] > '0' && nptr[i] < '9')
	{
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * n);
}
