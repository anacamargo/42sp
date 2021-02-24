/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:40:50 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/24 04:47:18 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] == set[i])
		i++;
	while (s1[len] == set[len])
	{
		len--;
	}
	return (ft_substr(s1, i, len));
}
