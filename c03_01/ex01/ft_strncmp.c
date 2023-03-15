/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:01:25 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/05 12:02:06 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && (s1[count] != '\0' || s2[count] != '\0'))
	{
		if (s1[count] > s2[count])
		{
			return (1);
		}
		else if (s1[count] < s2[count])
		{
			return (-1);
		}
		count++;
	}
	return (0);
}
