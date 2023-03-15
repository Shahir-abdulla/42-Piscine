/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:43:43 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/11 21:48:02 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (index < length)
	{
		if (f(tab[index]) != 0)
			count ++;
		index ++;
	}
	return (count);
}
