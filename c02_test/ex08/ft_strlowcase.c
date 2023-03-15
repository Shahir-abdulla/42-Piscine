/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:38:28 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/28 11:29:35 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] = str[count] + 32 ;
		}
		count++;
	}
	return (str);
}
