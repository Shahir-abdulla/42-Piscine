/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:30:34 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/13 11:13:07 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	add_one(int a, int b)
{
	return (a - b);
}



int main()
{
	int s[6] = {10, 8, 7, 6};

	printf("%d",ft_is_sort(s, 4,  &add_one));

	// i = 0;
	// while (i < 5)
	// {
	//     printf("%d\n", arr[i]);
	//     i++;
	// }

}
