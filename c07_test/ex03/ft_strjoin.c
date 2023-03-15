/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:41:08 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/08 10:15:10 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	copystring(char *main, char *to_add)
{
	int	index;

	index = 0;
	while (to_add[index])
	{
		main[index] = to_add[index];
		index ++;
	}
	return (index);
}

int	concatinate(int size, char *str, char **strs, char *sep)
{
	int	pos;
	int	count;

	pos = 0;
	count = 0;
	while (count < size)
	{
		pos += copystring(&str[pos], strs[count]);
		if (count != size - 1)
			pos += copystring(&str[pos], sep);
		count ++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	int		length;
	char	*str;
	int		pos;

	count = 0;
	length = 0;
	while (count < size)
	{
		length += ft_strlen(strs[count++]);
		if (count != size - 1)
			length += ft_strlen(sep);
	}
	str = (char *)malloc(sizeof(char) * length + 1);
	if (str == NULL)
	{
		*str = 0;
		return (str);
	}
	pos = concatinate(size, str, strs, sep);
	str[pos] = '\0';
	return (str);
}
