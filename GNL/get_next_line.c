/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 23:31:53 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/16 00:12:30 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		get_next_line(int fd, char **line)
{
	int			out;
	char		buf[BUFFER_SIZE + (out = 1)];
	char		*temp;
	static char *t;

	if (fd < 0 || !line || BUFFER_SIZE <= 0 || fd > RLIMIT_NOFILE)
	{
		free(t);
		return (-1);
	}
	if (!t)
		t = ft_strdup("");
	while (!ft_strchr(t, '\n') && (out = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[out] = '\0';
		temp = ft_strjoin(t, buf);
		free(t);
		t = temp;
	}
	if (out == 0)
		*line = ft_strdup(t);
	else if (out > 0)
		*line = ft_substr(t, 0, (ft_strchr(t, '\n') - t));
	else
		return (-1);
	temp = ft_strdup(t + (ft_strlen(*line) + ((out > 0) ? 1 : 0)));
	free(t);
	t = temp;
	return ((out > 0) ? 1 : 0);
}
