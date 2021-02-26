/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 03:10:40 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/26 23:53:36 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length(long int num)
{
	int i;

	i = 1;
	if (num == 0)
		return (1);
	while ((num /= 10) >= 1)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	num;
	char	*str;
	int		is_negative;

	num = n;
	is_negative = num < 0 ? 1 : 0;
	str = (char*)malloc((is_negative + length(n)) * sizeof(char));
	num *= is_negative ? -1 : 1;
	i = is_negative ? length(num) + 1 : length(num);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (num == 0)
		str[i--] = '0';
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	if (is_negative)
		str[i] = '-';
	return (str);
}
