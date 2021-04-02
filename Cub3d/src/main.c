/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:43:09 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/01 02:52:22 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

void draw_square(void *mlx, void *win, int x, int y, int width, int height, int color);

int main(void)
{
	void *mlx;
	void *win;
	mlx = mlx_init();

	win = mlx_new_window(mlx, 700, 700, "teste");
	draw_square(mlx, win, 100, 100, 300, 300, 0x00ffffff);
	mlx_loop(mlx);

	return (0);
}

void draw_square(void *mlx, void *win, int x, int y, int width, int height, int color)
{
	int i;
	int j;

	j = 0;
	while (j++ < height)
	{
		i = 0;
		while (i++ < width)		{
			mlx_pixel_put(mlx, win, (x+i), (y+j), color);
	}
}
