/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:51:58 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/13 11:11:42 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;

	count = 0;
	while (count < length - 1)
	{
		if (f(tab[count], tab[count + 1]) > 0)
			break ;
		count ++;
	}
	if (count == length - 1)
		return (1);
	count = 0;
	while (count < length - 1)
	{
		if (f(tab[count], tab[count + 1]) < 0)
			return (0);
		count ++;
	}
	return (1);
}
