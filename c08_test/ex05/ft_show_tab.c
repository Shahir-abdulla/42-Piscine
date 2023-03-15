/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:02:17 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/08 22:23:47 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print(int nb)
{
	char	c;

	if (nb > 0)
	{
		print(nb / 10);
		c = nb % 10 + '0';
		put_char(c);
	}
}

void	put_nbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	print(nb);
}

void	put_str(char *str)
{
	while (*str)
	{
		put_char(*str);
		str ++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str)
	{
		put_str((*par).str);
		put_char('\n');
		put_nbr((*par).size);
		put_char('\n');
		put_str((*par).copy);
		put_char('\n');
		par ++;
	}
}
