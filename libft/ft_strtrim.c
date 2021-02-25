/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:40:50 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/25 03:13:24 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "stdio.h"

int	is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int get_initial(char const *s1, char const *set)
{
	int i;

	i = 0;
	while(is_set(s1[i], set))
		i++;
	return (i);
}

int	get_end(char const *s1, char const *set, int len)
{
	int i;

	i = len - 1;
	while (is_set(s1[i], set))
		i--;
	return (++i);
} 


char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		end;
	int		initial;

	len = ft_strlen(s1);

	if (s1 == NULL || set == NULL)
		return (NULL);
	initial = get_initial(s1, set);
	end = get_end(s1, set, len);
	// printf("i:%d\nend:%d\n", i, end);
	return (ft_substr(s1, initial, end));
}

// int main(void)
// {
// 	char	set [] = "\t \n";
// 	char s1[] = " \n \t lorem ipsum dolor sit amet";
// 	// char str[12] = "Oi e Oi e Oi"; 
// 	// printf("s1: %s\nset: %s\nres: %s", s1, set, ft_strtrim(s1, set));
// 	printf("res: %s", ft_strtrim(s1, set));
// 	return(0);
// }