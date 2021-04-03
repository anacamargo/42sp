/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:42:40 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/03 02:36:10 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include <mlx.h>
# include "libft.h"
# include <stdio.h>

typedef	struct	s_screen
{
	void		*mlx;
	void		*win;
}				t_screen;

extern t_screen *g_screen;

void			draw_square(int x, int y, int size, int color);

#endif