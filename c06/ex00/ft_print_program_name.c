/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:33:41 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/06 15:08:07 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (*argv[0])
		{
			write(1, argv[0], 1);
			argv[0]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
