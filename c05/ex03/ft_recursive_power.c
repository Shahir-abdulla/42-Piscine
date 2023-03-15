/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:31:45 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/06 18:20:51 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_val(long nb, int power)
{
	if (power == 1)
		return (nb);
	nb = get_val(nb, power - 1) * nb;
	return ((int)nb);
}

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (get_val(nb, power));
}
