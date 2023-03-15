/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:10:03 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/12 19:13:00 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_count(char **tab)
{
	int	count;

	count = 0;
	while (tab[count] != 0)
		count ++;
	return (count);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[j], tab[j + 1]) > 0)
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
