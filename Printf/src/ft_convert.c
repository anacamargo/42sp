/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 04:07:34 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 21:20:47 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"
# include <stdio.h>

static	int		size_num (size_t num, int base)
{
	int i;

	i = 1;
	if (num == 0)
		return (1);
	while ((num /= base) >= 1)
		i++;
	return (i);
}

static	void	fill_size(t_print **print)
{
	if ((*print)->type == 'd' && (*print)->d == -2147483648)
		(*print)->size = 11;
	else if ((*print)->type == 'd' && (*print)->d < 0)
		(*print)->size = 1 + size_num((*print)->d, 10);
	else if ((*print)->type == 'd')
		(*print)->size = size_num((*print)->d, 10);
	else if ((*print)->type == 'u')
		(*print)->size = size_num((*print)->u, 10);
	else if ((*print)->type == 'x' || (*print)->type == 'X')
		(*print)->size = size_num((*print)->x, 16);
	else if ((*print)->type == 'p')
		(*print)->size = size_num((*print)->p, 16);
}

void			ft_select_conversion(char c, t_flags *value, t_print *print)
{
	print->type = c;
	if (c == 'c' || c == '%')
		print->c = (char)va_arg(value->args, int);
	else if (c == 's')
		print->s = va_arg(value->args, char *);
	else if (c == 'd' || c == 'i')
		print->d = va_arg(value->args, int);
	else if (c == 'u')
		print->u = va_arg(value->args, unsigned int);
	else if (c == 'x' || c == 'X')
		print->x = va_arg(value->args, unsigned int);
	else if (c == 'p')
		print->p = va_arg(value->args, uintptr_t);
	fill_size(&print);
}
