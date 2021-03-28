/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:53:26 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 22:40:02 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include <stdio.h>

typedef struct	s_flags
{
	int			index;
	int			count;
	int			dot;
	int 		minus;
	int			precision;
	int			width;
	int			zero;
	int			total;
	va_list		args;
}				t_flags;

typedef struct 	s_print
{
	char		c;
	char		*s;
	int			d;
	uintptr_t	p;
	size_t		u;
	// size_t		x;
	char		type;
	int			size;
}				t_print;


void		ft_init_struct(t_flags *flag);
void		ft_check_flags(char *s, t_flags *value);
void		ft_select_conversion(char c, t_flags *value, t_print *print);
int			ft_printf(const char *format, ...);
int			ft_put(t_flags *flag, t_print *print);
void		ft_print_zero(int n);
void		ft_print_space(int n);
#endif
