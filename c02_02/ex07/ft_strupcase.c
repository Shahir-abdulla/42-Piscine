/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:42:24 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/26 21:31:55 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] = str[count] - 32 ;
		}
		count++;
	}
	return (str);
}
