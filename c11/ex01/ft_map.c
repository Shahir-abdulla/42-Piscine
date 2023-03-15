/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:24:20 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/11 20:20:30 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*r_arr;
	int	count;

	r_arr = (int *)malloc(sizeof(int) * (length));
	if (r_arr == NULL)
		return (NULL);
	count = 0;
	while (count < length)
	{
		r_arr[count] = f(tab[count]);
		count ++;
	}
	return (r_arr);
}
