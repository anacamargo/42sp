/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:40:50 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/27 23:07:41 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0' && set[i] != c)
		i++;
	if (set[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (is_set(*s1, set) && *s1)
		s1++;
	end = ft_strlen(s1);
	while (is_set(s1[end], set) && end > 0)
		end--;
	return (ft_substr(s1, 0, end + 1));
}
