/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:53:50 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/13 12:11:30 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char *c, int length)
{
	int	index;

	index = 0;
	while (index < length)
	{
		if (c[index] >= 32 && c[index] <= 126)
			write(1, &c[index], 1);
		else
			write(1, ".", 1);
		index ++;
	}
}

void	print_hex(char str[], int index, int length)
{
	while (index < length)
	{
		str[index] = '0';
		index++;
	}
	index = index - 1;
	while (index >= 0)
	{
		put_char(&str[index], 1);
		index--;
	}
}

void	put_hex(long int value, int length)
{
	char	arr[16];
	int		remainder;
	int		index;

	index = 0;
	while (value > 0)
	{
		remainder = value % 16;
		if (remainder < 10)
			arr[index] = '0' + remainder;
		else
			arr[index] = 'a' + (remainder - 10);
		index ++;
		value = value / 16;
	}
	print_hex(arr, index, length);
}

void	print_line(void *addr, int start, int total)
{
	int	count;

	put_hex((long int)&addr[start], 16);
	put_char(":", 1);
	count = 0;
	while (count < 16)
	{
		if (count % 2 == 0)
			put_char(" ", 1);
		if (count < total)
			put_hex(((unsigned char *)addr)[start + count], 2);
		else
			put_char("  ", 2);
		count ++;
	}
	put_char(" ", 1);
	count = 0;
	while (count < total)
	{
		put_char((&((char *)addr)[start + count]), 1);
		count ++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (count < (size / 16))
	{
		print_line(addr, count * 16, 16);
		count ++;
	}
	if (size % 16 > 0)
		print_line(addr, count * 16, size % 16);
	return (addr);
}
