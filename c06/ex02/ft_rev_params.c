/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:55:42 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 11:57:19 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = argc - 1;
	while (count > 0)
	{
		while (*argv[count])
		{
			write(1, argv[count], 1);
			argv[count]++;
		}
		write(1, "\n", 1);
		count --;
	}
}
