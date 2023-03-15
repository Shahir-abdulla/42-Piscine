/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:01:27 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/06 10:13:38 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != 0)
	{
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	count;
	int	index;

	count = 1;
	while (count < argc - 1)
	{
		index = 1;
		while (index < argc - 1)
		{
			if (ft_strcmp(argv[index], argv[index + 1]) > 0)
			{
				swap(&argv[index], &argv[index + 1]);
			}
			index ++;
		}
		count ++;
	}
	count = 1;
	while (count < argc)
	{
		print_str(argv[count]);
		write(1, "\n", 1);
		count++;
	}
}
