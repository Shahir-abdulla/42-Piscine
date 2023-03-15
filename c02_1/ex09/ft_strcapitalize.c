/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:46:01 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/05 11:43:07 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	int		flag;

	index = 0;
	flag = 1;
	lowcase(str);
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (flag == 1)
				str[index] -= 32;
			flag = 0;
		}
		else if (str[index] >= '0' && str[index] <= '9')
			flag = 0;
		else
			flag = 1;
		index++;
	}
	return (str);
}
