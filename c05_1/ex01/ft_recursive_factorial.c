/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:25:52 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 13:43:12 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	factorial(int i)
{
	if (i == 0)
		return (1);
	return (factorial(i - 1) * i);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	return (factorial(nb));
}
