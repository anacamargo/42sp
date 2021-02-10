/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:53:07 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/10 03:26:46 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	*str = s;
	while (i < n)
	{
		*str = (unsigned char)c;
		i++;
		str++;
	}
	return (s);
}
