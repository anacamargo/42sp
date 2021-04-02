/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:45:02 by aclaudia          #+#    #+#             */
/*   Updated: 2021/04/02 21:03:37 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define BUFFER_SIZE 32

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct		s_flags
{
	int				index;
	int				count;
	int				dot;
	int				minus;
	int				prec;
	int				width;
	int				zero;
	int				total;
	va_list			args;
}					t_flags;

typedef	struct		s_print
{
	char			c;
	char			*s;
	int				d;
	uintptr_t		p;
	unsigned int	u;
	char			type;
	int				size;
}					t_print;

int					ft_atoi(const char *nptr);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nelem, size_t elsize);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strdup(const char *s);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *big, const char *little, \
size_t len);
char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_max(int a, int b);
int					ft_min(int a, int b);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(long int n, int fd);
void				ft_puthex_fd(unsigned int n, int fd, unsigned int base, \
int cap);
void				ft_putptr_fd(uintptr_t n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
void (*del)(void *));
int					get_next_line(int fd, char **line);
void				ft_init_struct(t_flags *flag);
void				ft_check_flags(const char *format, t_flags *value);
void				ft_select_conversion(char c, t_flags *value,\
t_print *print);
int					ft_printf(const char *format, ...);
int					ft_put(t_flags *flag, t_print *print);
void				ft_print_zero(int n);
void				ft_print_space(int n);
int					ft_print_char(t_flags *value, t_print *print);
int					ft_print_str(t_flags *value, t_print *print);
int					ft_print_uint(t_flags *value, t_print *print, int base,\
int cap);
int					ft_print_int(t_flags *value, t_print *print);
int					ft_print_ptr(t_flags *value, t_print *print);

#endif
