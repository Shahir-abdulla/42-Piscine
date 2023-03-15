/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 07:45:29 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/06 07:53:42 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
		return (0);
	index = 1;
	while ((index * index) <= nb)
	{
		if ((index * index) == nb)
			return (index);
		index ++;
	}
	return (0);
}
