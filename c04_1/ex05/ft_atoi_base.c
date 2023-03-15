/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:14:31 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 08:34:29 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	int	flag;

	flag = 0;
	if (c == '\t' || c == '\n' || c == '\v')
		flag = 1;
	else if (c == '\f' || c == '\r' || c == ' ')
		flag = 1;
	return (flag);
}

char	get_base_lengh_if_correct(char *base)
{
	int		count;
	int		prev;
	char	flag;
	char	c;

	count = 0;
	flag = 0;
	while (base[count])
	{
		prev = 0;
		c = base[count];
		if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
			flag = 1;
		while (prev < count)
		{
			if (c == base[prev])
				flag = 1;
			prev ++;
		}
		count ++;
	}
	if (count <= 1 || flag)
		return (0);
	return (count);
}

int	power(int base, int power)
{
	int	number;

	number = 1;
	while (power > 0)
	{
		number = number * base;
		power --;
	}
	if (base == 0)
		return (0);
	return (number);
}

long	get_number(char *str, char *base, int length, long number)
{
	int		index;
	int		count;
	int		pos;

	index = -1;
	count = 0;
	while (str[length] && ((str[length] >= 48 && str[length] <= 57)
			|| (str[length] >= 65 && str[length] <= 90)
			|| (str[length] >= 97 && str[length] <= 122)))
		length ++;
	while (count < length)
	{
		pos = 0;
		while (base[pos])
		{
			if (base[pos] == str[length - 1 - count])
				index = pos;
			pos ++;
		}
		if (index == -1)
			return (0);
		number += (power(get_base_lengh_if_correct(base), count) * index);
		count ++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	long	number;
	int		negative;

	number = 0;
	negative = 0;
	if (get_base_lengh_if_correct(base) == 0)
		return (0);
	while (*str)
	{
		if (*str == '-')
			negative ++;
		if ((*str != '+') && (ft_isspace(*str) != 1) && (*str != '-'))
		{
			number = get_number(str, base, 0, number);
			break ;
		}
		str ++;
	} 	
	if (negative % 2 != 0)
		number = -number;
	return ((int)number);
}
