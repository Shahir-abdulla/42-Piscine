/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:57:45 by shabdull          #+#    #+#             */
/*   Updated: 2023/02/26 12:52:16 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	put_char(char c);

void	do_horizontal_edges(int m_col, int col, char *chars)
{
	if (col == 0)
		put_char(chars[0]);
	else if (col == m_col - 1)
		put_char(chars[1]);
	else
		put_char(chars[2]);
}

void	fill_all(int m_col, int col, char *chars)
{
	if (col == 0 || col == m_col - 1)
	{
		put_char(chars[0]);
	}
	else
		put_char(' ');
}

void	set_chars(char *chars, char a, char b, char c)
{
	chars[0] = a;
	chars[1] = b;
	chars[2] = c;
}

void	do_matrix(int row, int m_row, int col, int m_col)
{
	char	chars[3];

	if (row == 0)
	{
		set_chars(chars, 'A', 'C', 'B');
		do_horizontal_edges(m_col, col, chars);
	}
	else if (row == m_row - 1)
	{
		set_chars(chars, 'C', 'A', 'B');
		do_horizontal_edges(m_col, col, chars);
	}
	else
	{
		set_chars(chars, 'B', '*', '*');
		fill_all(m_col, col, chars);
	}
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
			do_matrix(row, m_row, col, m_col);
			col ++;
		}
		put_char('\n');
		row ++;
	}
}
