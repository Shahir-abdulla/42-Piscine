/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:46:01 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/28 16:42:14 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	capitalize(char *str, int index)
{
	if (str[index] >= 97 && str[index] <= 122)
	{
		str[index] = str[index] - 32;
		return (1);
	}
	return (0);
}

int	make_lower(char *str, int index)
{
	if (str[index] >= 65 && str[index] <= 90)
	{
		str[index] = str[index] + 32;
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	if (capitalize(str, 0))
		count++;
	while (str[count])
	{
		if (str[count] < 65 || (str[count] > 90 && str[count] < 97) || str[count] > 122)
		{
			if (str[count + 1])
			{
				if (capitalize(str, count + 1))
					count++;
			}
		}
		else
			make_lower(str, count);
		count++;
	}
	return (str);
}
