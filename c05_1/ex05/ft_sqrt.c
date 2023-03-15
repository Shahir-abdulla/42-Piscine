/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 07:45:29 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 14:57:06 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;

	if (nb <= 0)
		return (0);
	index = 1;
	while ((index * index) <= nb)
	{
		if ((index * index) == nb)
			return ((int)index);
		index ++;
	}
	return (0);
}
