/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:23:00 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/08 22:31:00 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	int		size;
	char	*copy;
	int		count;

	count = 0;
	size = str_len(str);
	copy = (char *)malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (NULL);
	while (str[count])
	{
		copy[count] = str[count];
		count ++;
	}
	copy[count] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					count;
	struct s_stock_str	*tab;

	count = 0;
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (count < ac)
	{
		tab[count].copy = ft_strcpy(av[count]);
		tab[count].str = av[count];
		tab[count].size = str_len(av[count]);
		count ++;
	}
	tab[count].str = 0;
	tab[count].copy = 0;
	return (tab);
}
