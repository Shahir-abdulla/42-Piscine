# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 17:07:51 by shabdull          #+#    #+#              #
#    Updated: 2023/03/12 17:08:04 by shabdull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
ranlib Libft.a
rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o