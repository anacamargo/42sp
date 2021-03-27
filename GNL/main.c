/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 22:57:42 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/16 00:00:34 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int		fd = open("teste.txt", O_RDONLY);
	int		out = 1;
	char	*line;
	
	while (out > 0)
	{
		out = get_next_line(fd, &line);
		printf("%s\n", line);
	}
	return (0);
}
