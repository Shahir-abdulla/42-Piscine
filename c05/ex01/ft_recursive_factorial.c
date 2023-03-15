/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:25:52 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 19:50:41 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	factorial(long i)
{
	if (i == 1)
		return (1);
	return (factorial(i - 1) * i);
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (0);
	return ((int)factorial((long)nb));
}
