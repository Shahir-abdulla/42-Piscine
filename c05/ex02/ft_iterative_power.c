/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:52:43 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/05 17:28:34 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	long	val;

	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	val = 1;
	while (power > 0)
	{
		val = val * nb;
		power --;
	}
	return ((int)val);
}
