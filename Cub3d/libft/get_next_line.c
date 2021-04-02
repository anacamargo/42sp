/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 23:31:53 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/02 21:03:02 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	copy_array(char *t, char ***line, int out)
{
	if (out == 0)
		**line = ft_strdup(t);
	else if (out > 0)
		**line = ft_substr(t, 0, (ft_strchr(t, '\n') - t));
	return (out);
}

static int	check_init_conditions(int fd, char ***line, char **t)
{
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
	{
		free(*t);
		return (-1);
	}
	return (1);
}

int			get_next_line(int fd, char **line)
{
	int			out;
	char		buf[BUFFER_SIZE + 1];
	char		*temp;
	static char	*t;

	out = 1;
	if (check_init_conditions(fd, &line, &t) == -1)
		return (-1);
	t = (!t) ? ft_strdup("") : t;
	while (!ft_strchr(t, '\n') && (out = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[out] = '\0';
		temp = ft_strjoin(t, buf);
		free(t);
		t = temp;
	}
	if (copy_array(t, &line, out) == -1)
		return (-1);
	temp = ft_strdup(t + (ft_strlen(*line) + ((out > 0) ? 1 : 0)));
	free(t);
	t = temp;
	if (out == 0 && t)
		free(t);
	t = (out == 0 && t) ? NULL : t;
	return ((out > 0) ? 1 : 0);
}
