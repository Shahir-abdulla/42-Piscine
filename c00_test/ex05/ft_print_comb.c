/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:27:29 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/23 20:00:23 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char a, char b, char c, char has_comma)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (has_comma == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	digit_1;
	char	digit_2;
	char	digit_3;
	char	has_last;

	digit_1 = '0';
	while (digit_1 <= '7')
	{
		digit_2 = digit_1 + 1;
		while (digit_2 <= '8')
		{
			digit_3 = digit_2 + 1;
			while (digit_3 <= '9')
			{
				has_last = 1;
				if (digit_1 == '7' && digit_2 == '8' && digit_3 == '9')
					has_last = 0;
				ft_write_comb(digit_1, digit_2, digit_3, has_last);
				digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}
