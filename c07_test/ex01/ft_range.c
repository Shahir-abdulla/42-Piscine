/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:41:15 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/06 13:35:31 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	count;

	if (min >= max)
		return (0);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (0);
	count = 0;
	while (count < size)
	{
		arr[count] = min + count;
		count ++;
	}
	return (arr);
}
