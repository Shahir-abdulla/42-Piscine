/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:14:20 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/05 08:45:29 by shabdull         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int		count;
	int		negative;
	long	number;

	negative = 0;
	count = 0;
	number = 0;
	while (ft_isspace(*str))
		str ++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative += 1;
		str ++;
	}
	while ((str[count] >= '0') && (str[count] <= '9'))
	{
		number = (number * 10) + (str[count] - '0');
		count ++;
	}
	if (negative % 2 != 0)
		number = -number;
	return ((int)number);
}
