/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:40:39 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 13:33:08 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	rst;

	rst = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		rst = rst * nb;
		nb--;
	}
	return ((long)rst);
}
