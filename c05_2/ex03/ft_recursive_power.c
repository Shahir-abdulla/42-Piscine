/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:31:45 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 17:19:04 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_val(int nb, int power)
{
	if (power == 1)
		return (nb);
	nb = get_val(nb, power - 1) * nb;
	return (nb);
}

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	return (get_val(nb, power));
}
