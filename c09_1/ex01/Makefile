# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 11:00:17 by shabdull          #+#    #+#              #
#    Updated: 2023/03/11 16:05:50 by shabdull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SOURCE_DIR = srcs

C_FILES =  srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = $(C_FILES:.c=.o)

INCLUDES = includes

HEADER = $(INCLUDES)/ft.h

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc  $(NAME) $?

%.o : %.c $(HEADER)
	cc $(FLAGS) -I $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re