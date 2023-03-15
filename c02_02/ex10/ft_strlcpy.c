/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:42:06 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/05 10:13:46 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	count;

	length = 0;
	while (src[length])
		length++;
	count = 0;
	if (size != 0)
	{
		while (count < (size - 1) && src[count])
		{
			dest[count] = src[count];
			count ++;
		}
		dest[count] = '\0';
	}
	return (length);
}
