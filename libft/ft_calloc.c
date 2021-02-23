/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 04:02:34 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/23 23:09:53 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void *s;

	s = (void*)malloc(nelem * elsize);
	if (nelem == 0 || elsize == 0)
		return (NULL);
	ft_bzero(s, (nelem * elsize));
	return (s);
}
