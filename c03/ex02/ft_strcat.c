/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:12:50 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/01 08:31:06 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	count;

	length = 0;
	count = 0;
	while (dest[length])
		length ++;
	while (src[count])
	{
		dest[length + count] = src[count];
		count ++;
	}
	dest[length + count] = '\0';
	return (dest);
}
