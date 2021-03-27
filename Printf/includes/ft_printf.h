/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:53:26 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/26 01:54:09 by aclaudia         ###   ########.fr       */
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
	int			dot;
	int 		minus;
	int			precision;
	int			space;
	int			star;
	int			width;
	int			zero;
	va_list		args;
}				t_flags;

int			ft_printf(const char *format, ...);
t_flags 	*ft_init_flags(t_flags *flag);
void 		ft_check_flags(const char *format, t_flags *value);
void		ft_select_conversion(const char *format, t_flags *value);
#endif
