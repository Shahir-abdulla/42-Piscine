/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:57:45 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/25 14:52:08 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	put_char(char c);

void	do_vertical_edges(int m_row, int row)
{
	if (row == 0)
		put_char('A');
	else if (row == m_row - 1)
		put_char('C');
	else
		put_char('B');
}

void	fill_all(int m_row, int row)
{
	if (row == 0 || row == m_row - 1)
	{
		put_char('B');
	}
	else
		put_char(' ');
}

void	rush(int m_col, int m_row)
{
	int		row;
	int		col;

	row = 0;
	while (row < m_row)
	{
		col = 0;
		while (col < m_col)
		{
			if (col == 0 || col == m_col - 1)
				do_vertical_edges(m_row, row);
			else
				fill_all(m_row, row);
			col ++;
		}
		put_char('\n');
		row ++;
	}
}
