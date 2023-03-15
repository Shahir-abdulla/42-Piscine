/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:14:20 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/05 08:45:03 by shabdull         ###   ########.fr       */
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

int	power(int base, int power)
{
	int	number;

	number = 1;
	while (power > 0)
	{
		number = number * base;
		power --;
	}
	return (number);
}

int	atoi(char *str)
{
	int	count;
	int	number;
	int	index;

	count = 0;
	number = 0;
	while ((str[count]) && ((str[count] >= '0') && (str[count] <= '9')))
		count ++;
	index = 0;
	count = count - 1;
	while (count >= 0)
	{
		number += (power(10, index) * (str[count] - '0'));
		index ++;
		count --;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int		count;
	int		negative;
	long	number;

	negative = 0;
	count = 0;
	while (str[count])
	{
		if (str[count] == '-')
			negative += 1;
		if ((str[count] >= '0') && (str[count] <= '9'))
		{
			str = &str[count];
			break ;
		}
		else if (! (ft_isspace(str[count]) || str[count] == '+'
				|| str[count] == '-'))
			break ;
		count ++;
	}
	number = atoi(str);
	if (negative % 2 != 0)
		number = -number;
	return ((int)number);
}
