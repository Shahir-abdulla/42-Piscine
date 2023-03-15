/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:52:22 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/25 22:05:37 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_array(int array[], int total, int index, int start_val)
{
	while (index < 10)
	{
		if (index < total)
			array[index] = start_val;
		else
			array[index] = -1;
		index++;
		start_val++;
	}
}

void	print_array(int array[], int n)
{
	int	index;

	index = 0;
	while (index < 10)
	{	
		if (array[index] != -1)
		{
			ft_putchar(array[index] + '0');
		}
		index ++;
	}
	if (!(array[0] == 10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	array[10];
	int	count;

	if (n <= 0 || n >= 10)
		return ;
	count = 0;
	init_array(array, n, 0, 0);
	print_array(array, n);
	while (count < n)
	{
		while (array[n - count - 1] != 9 - count)
		{
			array[n - count - 1] += 1;
			if (count != 0)
			{
				init_array(array, n, n - count, array[n - count - 1] + 1);
				count = 0;
			}
			print_array(array, n);
		}
		count += 1;
	}
}
