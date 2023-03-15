/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 08:31:34 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/07 12:13:59 by shabdull         ###   ########.fr       */
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

int	get_pos(char c, char *base)
{
	int	count;

	count = 0;
	while (base[count])
	{
		if (base[count] == c)
			return (count);
		count ++;
	}
	return (-1);
}

long	get_number(char *str, char *base, long number)
{
	int		count;
	int		pos;

	count = 0;
	while (str[count])
	{
		pos = get_pos(str[count], base);
		if (pos == -1)
			break ;
		number = (number * get_base_lengh_if_correct(base)) + pos;
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
	while (*str && (ft_isspace(*str) == 1))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			negative ++;
		str ++;
	}
	number = get_number(str, base, number);
	if (negative % 2 != 0)
		number = -number;
	return ((int)number);
}
