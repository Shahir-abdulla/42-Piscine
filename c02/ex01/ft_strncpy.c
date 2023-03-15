/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:33:34 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/28 11:29:00 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		count;
	char				stop;

	count = 0;
	stop = 0;
	while (count < n)
	{
		if (src[count] == '\0')
			stop = 1;
		if (stop == 0)
			dest[count] = src[count];
		else
			dest[count] = '\0';
		count ++;
	}
	return (dest);
}
