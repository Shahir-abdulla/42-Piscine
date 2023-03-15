/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:42:36 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/06 08:58:50 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		while (*argv[count])
		{
			write(1, argv[count], 1);
			argv[count]++;
		}
		write(1, "\n", 1);
		count ++;
	}
}
