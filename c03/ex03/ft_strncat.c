/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:56:39 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/01 09:06:02 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length;
	unsigned int	count;

	length = 0;
	count = 0;
	while (dest[length])
		length ++;
	while (src[count] && count < nb)
	{
		dest[length + count] = src[count];
		count ++;
	}
	dest[length + count] = '\0';
	return (dest);
}
