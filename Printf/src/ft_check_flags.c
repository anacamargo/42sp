/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacamargo <anacamargo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:01:37 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/29 16:41:33 by anacamargo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	deal_digit(char **s, t_flags **value)
{
	if (!(*value)->dot)
	{
		if (**s == '0')
			(*value)->zero = 1;
		while (ft_isdigit(**s))
		{
			(*value)->width = (*value)->width * 10 + \
				ft_atoi(ft_substr(*s, 0, 1));
			*s += 1;
		}
	}
	else
	{
		while (ft_isdigit(**s))
		{
			(*value)->prec = (*value)->prec * 10 + \
				ft_atoi(ft_substr(*s, 0, 1));
			*s += 1;
		}
	}
	*s -= 1;
}

void		ft_check_flags(const char *format, t_flags *value)
{
	char *s;

	s = ft_substr(format, (value->index - value->count), value->count + 1);
	while (*s)
	{
		if (*s == '-')
			value->minus = 1;
		if (*s == '.')
			value->dot = 1;
		if (*s == '*' && !value->dot)
			value->width = va_arg(value->args, int);
		else if (*s == '*' && value->dot)
			value->prec = va_arg(value->args, int);
		if (ft_isdigit(*s))
			deal_digit(&s, &value);
		s += 1;
	}
	value->minus = (value->width < 0) ? 1 : value->minus;
	value->width *= (value->width > 0) ? 1 : -1;
}
