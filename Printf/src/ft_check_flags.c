/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 04:31:46 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 21:06:08 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

static	void	deal_digit(char **s, t_flags **value)
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
			(*value)->precision = (*value)->precision * 10 + \
				ft_atoi(ft_substr(*s, 0, 1));
			*s += 1;
		}
	}
	*s -= 1;
}

void	ft_check_flags(char *s, t_flags *value)
{
	while (*s)
	{
		if (*s == '-')
			value->minus = 1;
		if (*s == '.')
			value->dot = 1;
		if (*s == '*' && !value->dot)
			value->width = va_arg(value->args, int);
		else if (*s == '*' && value->dot)
			value->precision = va_arg(value->args, int);
		if (ft_isdigit(*s))
			deal_digit(&s, &value);
		s += 1;
	}
	value->minus = (value->width < 0) ? 1 : value->minus;
	value->width *= (value->width > 0) ? 1 : -1;
}