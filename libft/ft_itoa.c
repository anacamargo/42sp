/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 03:10:40 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/26 04:57:59 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")

int		length(long int num)
{
	int i;

	i = 1;
	while ((num = num / 10) >= 1)
		i++;
	return (i);
}

void	reverse(char *s)
{
	size_t	len;
	size_t	i;
	char	aux;

	i = 0;
	len = ft_strlen(s);
	while (i < len / 2)
	{
		aux = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = aux;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int			i;
	long		num;
	char		*str;
	int			is_negative;

	num = n;
	is_negative = num < 0 ? 1 : 0;
	str = (char*)malloc((is_negative + length(num)) * sizeof(char));
	i = 0;

	if (!str)
		return (NULL);
	if (num == 0)
	{
		str[i] = '0';
		i++;
	}
	while (num > 0)
	{	
		str[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	if (is_negative)
		str[i] = '-';
	i++;
	str[i] = '\0';
	
	reverse(str);
	return (str);
}

int main(void)
{
	int n = -240;
	printf("%s\n", typeof(n));
	ft_itoa(n);
	printf("%s %s\n", ft_itoa(n),typeof(ft_itoa(n)));
	return (0);
}