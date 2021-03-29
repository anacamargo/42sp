/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 03:40:56 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 03:42:32 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned int n, int fd, unsigned int base, int cap)
{
	char c;

	c = (cap) ? 'A' : 'a';
	if (n > base - 1)
	{
		ft_puthex_fd((n / base), fd, base, cap);
		ft_puthex_fd((n % base), fd, base, cap);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd((n - 10 + c), fd);
		else
			ft_putchar_fd((n + '0'), fd);
	}
}
