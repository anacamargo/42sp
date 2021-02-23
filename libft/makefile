# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 00:21:56 by aclaudia          #+#    #+#              #
#    Updated: 2021/02/22 00:10:30 by aclaudia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJ=$(SRC:.c=.o)

FLAGS+=-Wall -Wextra -Werror -I./ -c

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	gcc $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all
