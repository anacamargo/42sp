# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 00:21:56 by aclaudia          #+#    #+#              #
#    Updated: 2021/03/27 21:27:51 by vcordeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_puthex_fd.c\
ft_putptr_fd.c ft_max.c ft_min.c

SRC_BONUS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ=$(SRC:.c=.o)

OBJ_BONUS=$(SRC_BONUS:.c=.o)

FLAGS+=-Wall -Wextra -Werror -I./ -c

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	gcc $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
  
all: $(NAME)

bonus:
	gcc $(FLAGS) $(SRC_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)

clean:
	rm -f ${OBJ} ${OBJ_BONUS}

fclean: clean
	rm -f $(NAME)

re: fclean all
