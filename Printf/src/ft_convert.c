/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacamargo <anacamargo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:01:37 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 16:46:32 by anacamargo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	int		size_num(unsigned int num, int base)
{
	int i;

	i = 1;
	if (num == 0)
		return (1);
	while ((num /= base) >= 1)
		i++;
	return (i);
}

static	int		size_ptr(uintptr_t num, int base)
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
	if (((*print)->type == 'd' || (*print)->type == 'i') && ((*print)->d < 0))
		(*print)->size = size_num((*print)->d * -1, 10);
	else if ((*print)->type == 'd' || (*print)->type == 'i')
		(*print)->size = size_num((*print)->d, 10);
	else if ((*print)->type == 'u')
		(*print)->size = size_num((*print)->u, 10);
	else if ((*print)->type == 'x' || (*print)->type == 'X')
		(*print)->size = size_num((*print)->u, 16);
	else if ((*print)->type == 'p')
		(*print)->size = 2 + size_ptr((*print)->p, 16);
	else if ((*print)->type == 'c')
		(*print)->size = 1;
	else if ((*print)->type == 's')
		(*print)->size = ft_strlen((*print)->s);
}

void			ft_select_conversion(char c, t_flags *value, t_print *print)
{
	print->type = (c == '%') ? 'c' : c;
	if (c == 'c')
		print->c = (char)va_arg(value->args, int);
	if (c == '%')
		print->c = c;
	else if (c == 's')
		print->s = va_arg(value->args, char *);
	else if (c == 'd' || c == 'i')
		print->d = va_arg(value->args, int);
	else if (c == 'u' || c == 'x' || c == 'X')
		print->u = va_arg(value->args, unsigned int);
	else if (c == 'p')
		print->p = va_arg(value->args, uintptr_t);
	print->s = (!print->s) ? "(null)\0" : print->s;
	fill_size(&print);
}
