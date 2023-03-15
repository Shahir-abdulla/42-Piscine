/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:40:58 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/26 12:58:52 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int m_col, int m_row);

int	main(void)
{
	int		col;
	int		row;
	char	c;

	while (1)
	{
		printf("Enter the number of colms ");
		scanf("%d", &col);
		printf("Enter the number of rows ");
		scanf("%d", &row);
		if (col <= 0 || row <= 0)
			printf("Not a valid input\n");
		else
			rush(col, row);
		printf("Press y to continue, press anything else to exit ");
		scanf("%s", &c);
		if (c == 'y')
			continue ;
		else
			break ;
	}
}
