/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:14:15 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/04 11:19:57 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	has_value_at(char *str, char *to_find, int count)
{
	int	index;
	int	flag;

	index = 0;
	flag = 0;
	while (to_find[index])
	{
		if (str[count + index] != to_find[index])
		{
			flag = 1;
			break ;
		}
		index++;
	}
	return (flag);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	count = 0;
	if (!*to_find)
		return (str);
	while (str[count])
	{
		if (str[count] == to_find[0])
		{
			if (has_value_at(str, to_find, count) == 0)
				return (&str[count]);
		}
		count ++;
	}
	return (0);
}
