# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 00:21:56 by aclaudia          #+#    #+#              #
#    Updated: 2021/04/02 20:41:57 by aclaudia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_puthex_fd.c\
ft_putptr_fd.c ft_max.c ft_min.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
ft_lstmap.c get_next_line.c ft_printf.c ft_init_struct.c ft_convert.c\
ft_check_flags.c ft_put.c ft_print_space.c ft_print_zero.c ft_print_char.c\
ft_print_str.c ft_print_uint.c ft_print_int.c ft_print_ptr.c ft_printf.c\
ft_init_struct.c ft_convert.c ft_check_flags.c ft_put.c ft_print_space.c\
ft_print_zero.c ft_print_char.c ft_print_str.c ft_print_uint.c ft_print_int.c\
ft_print_ptr.c

OBJS=$(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror -I./ -c

$(NAME): $(OBJS)
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
  
.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f $(NAME)

re: fclean all
