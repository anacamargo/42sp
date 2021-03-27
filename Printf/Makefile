# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/18 03:44:20 by aclaudia          #+#    #+#              #
#    Updated: 2021/03/26 01:56:22 by aclaudia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

NAME = libftprintf.a

SRCS_LIST = ft_printf.c ft_init_flags.c ft_check_flags.c \
ft_select_conversion.c

FOLDER = src

SRCS = $(addprefix ${FOLDER}/, ${SRCS_LIST})

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

all : $(NAME)

$(NAME): $(OBJS)
    @$(MAKE) -C ./libft
    @cp libft/libft.a $(NAME)
    @$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
    @ar -rcs $(NAME) $(OBJS)

clean :
    @$(MAKE) clean -C ./libft
    @rm -rf *.o

fclean : clean
    @$(MAKE) fclean -C ./libft
    @rm -rf $(NAME)

re : fclean all
