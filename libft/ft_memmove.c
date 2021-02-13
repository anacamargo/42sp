/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 03:58:57 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/13 05:29:37 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char 		*d;
	const unsigned char *t;
	const unsigned char *s;
	size_t i;

	d = dest;
	s = src;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	while (i < n)
	{
		d[i] = s[i];
		i++; 
	}
	return (dest);
}


int main () {
	// char dest[] = "oldstring";
	char	*dest;
	const char src[]  = "lorem ipsum dolor sit amet";
	dest = src + 1;
	
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	return(0);
}