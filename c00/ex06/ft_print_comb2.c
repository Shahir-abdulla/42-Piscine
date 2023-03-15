/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:33:26 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/23 22:10:18 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int n1, int n2, char has_comma)
{
	ft_putchar(48 + n1 / 10);
	ft_putchar(48 + n1 % 10);
	ft_putchar(' ');
	ft_putchar(48 + n2 / 10);
	ft_putchar(48 + n2 % 10);
	if (has_comma == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	has_comma;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			has_comma = 1;
			if (n1 == 98 && n2 == 99)
				has_comma = 0;
			ft_write_comb(n1, n2, has_comma);
			n2++;
		}
		n1++;
	}
}
