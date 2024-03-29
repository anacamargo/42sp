/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:43:09 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/03 03:40:48 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub.h"

t_screen	*g_screen;

int		main(void)
{
	g_screen->mlx = mlx_init();
	g_screen->win = mlx_new_window(g_screen->mlx, 700, 700, "teste");
	draw_square(100, 100, 300, 0x00ffffff);
	mlx_loop(g_screen->mlx);
	return (0);
}

void	draw_square(int x, int y, int size, int color)
{
	int i;
	int j;

	j = 0;
	while (j++ < size)
	{
		i = 0;
		while (i++ < size)
			mlx_pixel_put(g_screen->mlx, g_screen->win, x + i, y + j, color);
	}
}
