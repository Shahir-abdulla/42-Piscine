/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:54:54 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/04 11:20:03 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	count;

	dlen = 0;
	slen = 0;
	while (src[slen])
		slen++;
	while (dest[dlen])
		dlen ++;
	if (size == 0 || size <= dlen)
		return (size + slen);
	count = 0;
	while (count < (size - dlen - 1) && src[count])
	{
		dest[dlen + count] = src[count];
		count ++;
	}
	dest[dlen + count] = '\0';
	return (dlen + slen);
}
