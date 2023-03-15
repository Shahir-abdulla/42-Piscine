/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:21:53 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/08 19:14:41 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*str;
	int		count;

	length = 0;
	while (src[length])
		length ++;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	count = 0;
	while (count < length)
	{
		str[count] = src[count];
		count ++;
	}
	str[count] = '\0';
	return (str);
}	
