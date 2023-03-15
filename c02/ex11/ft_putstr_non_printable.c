/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:08:26 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/04 11:42:47 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	print_hex(char str[], int index, int length)
// {
// 	while (index < length)
// 	{
// 		str[index] = '0';
// 		index++;
// 	}
// 	index = index - 1;
// 	while (index >= 0)
// 	{
// 		ft_putchar(str[index]);
// 		index--;
// 	}
// }

// void	put_hex(char ascii)
// {
// 	char	arr[2];
// 	int		remainder;
// 	int		index;

// 	index = 0;
// 	while (ascii > 0)
// 	{
// 		remainder = ascii % 16;
// 		if (remainder < 10)
// 			arr[index] = '0' + remainder;
// 		else
// 			arr[index] = 'a' + (remainder - 10);
// 		index ++;
// 		ascii = ascii / 16;
// 	}
// 	print_hex(arr, index, 2);
// }

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
			// put_hex(str[count]);
		}
		count++;
	}
}
