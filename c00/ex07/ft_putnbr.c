/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:15:01 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/23 21:43:28 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:33:26 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/22 21:02:56 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_array(char array[])
{
	int	index;

	index = 0;
	while (index < 11)
	{
		array[index] = 'a';
		index++;
	}
}

void	print_array(char array[])
{
	int	index;

	index = 10;
	while (index >= 0)
	{	
		if (array[index] != 'a')
		{
			ft_putchar(array[index]);
		}
		index --;
	}
}

void	ft_putnbr(int nb)
{
	char	to_print[11];
	int		index;

	init_array(to_print);
	index = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
			nb = -1 * nb;
	}
	while (nb > 0)
	{
		to_print[index] = nb % 10 + 48;
		nb = nb / 10;
		index ++;
	}
	index = 10;
	print_array(to_print);
}
