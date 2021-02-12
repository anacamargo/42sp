/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:32:12 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/12 01:06:02 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBTF_H

#include <string.h>

void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif