/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:10:48 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/06 13:35:09 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		*arr;
	int		count;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	count = 0;
	while (count < size)
	{
		arr[count] = min + count;
		count ++;
	}
	*range = arr;
	return (size);
}
