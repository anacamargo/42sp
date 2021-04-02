# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 02:42:59 by aclaudia          #+#    #+#              #
#    Updated: 2021/04/01 03:42:20 by aclaudia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub.a

SRCS_LIST = main.c

FOLDER = src

SRCS = $(addprefix ${FOLDER}/, ${SRCS_LIST})

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

LFLAGS= -Lmlx -lmlx -L/usr/lib -Imlx_linux -lXext -lX11 -lm

INCLUDES = -I./includes

.PHONY: all clean fclean re

all : $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C ./libft
	@cp libft/libft.a $(NAME)
	@$(CC) $(SRCS) $(CFLAGS) $(LFLAGS) $(INCLUDES)  
	@ar -rcs $(NAME) $(OBJS)

clean :
	@$(MAKE) clean -C ./libft
	@rm -rf *.o
	@rm -rf src/*.o
	@rm -f $(OBJS)

fclean : clean
	@$(MAKE) fclean -C ./libft
	@rm -rf $(NAME)

re : fclean all
