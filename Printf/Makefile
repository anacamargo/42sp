# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/18 03:44:20 by aclaudia          #+#    #+#              #
#    Updated: 2021/03/27 21:40:31 by vcordeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

NAME = libftprintf.a

SRCS_LIST = ft_printf.c ft_init_struct.c ft_convert.c ft_check_flags.c ft_put.c ft_print_space.c ft_print_zero.c

FOLDER = src

SRCS = $(addprefix ${FOLDER}/, ${SRCS_LIST})

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

RUNFLAGS = -Wall -Wextra -Werror

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

run:
	@$(CC) $(RUNFLAGS) src/ft_printf.c libftprintf.a && ./a.out && rm a.out

test:
	@$(CC) $(RUNFLAGS) src/main.c libftprintf.a && ./a.out && rm a.out