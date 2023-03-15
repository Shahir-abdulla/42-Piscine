/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:11:57 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/13 11:16:28 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != 0))
		i++;
	return (s1[i] - s2[i]);
}

int	get_count(char **tab)
{
	int	count;

	count = 0;
	while (tab[count] != 0)
		count ++;
	return (count);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < (get_count(tab) - 1))
	{	
		j = 0;
		while (j < (get_count(tab) - 1 - i))
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i ++;
	}
}
