/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 04:02:34 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/01 00:40:11 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void *s;

	if (!(s = (void*)malloc(nelem * elsize)))
		return (NULL);
	ft_bzero(s, (nelem * elsize));
	return (s);
}
