/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 21:13:11 by aclaudia          #+#    #+#             */
/*   Updated: 2021/02/10 03:32:23 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t  ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
void    *ft_memset(void *s, int c, size_t n);
// char	*ft_strchr(char *s, int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

int		main(void)
{
    char string[30] = "quarentaedois";
    unsigned int length;
    length = ft_strlen(string);
    // printf("13 length: %i\n", length);

   
    char str[50] = "This is main function";
    // memset(&str,'$',7);
    // ft_memset(&str, '$', 7);
    // printf("Result: %s\n", str);

    // printf("%c\n", ft_toupper(103));
    // printf("%c\n", ft_tolower(71));

    // printf("%c\n", ft_isprint(31));
    // printf("%c\n", ft_isprint(33));


    // printf("%c\n", ft_isprint(31));
    // printf("%c\n", ft_isprint(33));
    
    // printf("%d\n", ft_isdigit(100));
    // printf("%c\n", ft_isdigit(55));
	
	// printf("%c\n", ft_isalpha(100));
	// printf("%d\n", ft_isalpha(50));

	// printf("%d\n", ft_isalnum(100));
	// printf("%d\n", ft_isalnum(43));

    char str2[50] = "testa";
    printf("strchr: %p\n", strchr(&str2, 84));
    // printf("strchr: %p\n", ft_strchr(&str2[0], 84));    
    return(0);
}
