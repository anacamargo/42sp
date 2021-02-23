// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memmove.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2021/02/13 03:58:57 by aclaudia          #+#    #+#             */
// /*   Updated: 2021/02/13 18:32:17 by aclaudia         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*dn;
	const unsigned char	*sn;
	size_t				j;
	size_t 				i;

	d = dest;
	s = src;
	dn = dest + n;
	sn = src + n;
	i = 0;
	j = 0;

	if (!dest && !src)
		return (NULL);

	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++; 
		}
	}
	else
	{
		while (n > 0)
		{
			dn[j] = sn[j];
			j--;
		}
	}
	return (dest);
}
