/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:57:27 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/04 23:58:58 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(str = (char*)malloc(sizeof(char))))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (!(str = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
