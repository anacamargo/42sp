/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:40:50 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/26 04:18:35 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	int i;
	i = 0;
	while (set[i] != '\0' && set[i] != c)
		i++;
	if (set[i] == c)
		return(1);
	return(0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	start;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);

	while (is_set(s1[start], set) && start <= (int)ft_strlen(s1))
		start++;
	while (is_set(s1[end], set) && end >= 0)
		end--;

	return (ft_substr(s1, start, end -start + 1));
}
