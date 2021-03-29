/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 03:43:14 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 03:43:56 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr_fd(uintptr_t n, int fd)
{
	if (n > 15)
	{
		ft_putptr_fd((n / 16), fd);
		ft_putptr_fd((n % 16), fd);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd((n - 10 + 'a'), fd);
		else
			ft_putchar_fd((n + '0'), fd);
	}
}
