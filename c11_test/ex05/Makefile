# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 12:23:15 by shabdull          #+#    #+#              #
#    Updated: 2023/03/13 12:40:19 by shabdull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

C_FILES = doop.c ft_atoi.c ft_putnbr.c operations.c

OBJS = $(C_FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = doop.h

all : $(NAME)

$(NAME): $(OBJS)
	@cc $(FLAGS) $^ -o $@

%.o : %.c $(HEADER)
	@cc $(FLAGS) -c $< -o $@

clean: 
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re