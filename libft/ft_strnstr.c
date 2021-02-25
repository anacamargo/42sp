/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 22:13:12 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/26 00:47:51 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	size_t			size;

	i = 0;
	size = ft_strlen(little);
	if (little[0] == '\0')
		return ((char*)big);
	while ((i + size) < len)
	{
		if (ft_strncmp(ft_substr(big, i, size), little, len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
