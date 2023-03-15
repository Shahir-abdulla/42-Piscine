/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:08:26 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/05 11:30:21 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 32 && str[count] <= 126)
			ft_putchar(str[count]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[count] / 16]);
			ft_putchar("0123456789abcdef"[str[count] % 16]);
		}
		count++;
	}
}
