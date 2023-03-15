/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:43:19 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 13:18:44 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	fibonacci(int index)
{
	if (index <= 2)
		return ((long)1);
	return ((long)(fibonacci(index - 2) + fibonacci(index - 1)));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return ((int)fibonacci(index));
}
