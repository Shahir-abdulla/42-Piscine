/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:39:07 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/04 10:43:44 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
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
		if ((c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122))
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

void	print(long int nbr, int base_len, char *base)
{
	if (nbr > 0)
	{
		print (nbr / base_len, base_len, base);
		put_char(base[nbr % base_len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	lnbr;

	lnbr = (long)nbr;
	base_len = get_base_lengh_if_correct(base);
	if (base_len)
	{	
		if (lnbr == 0)
		{
			put_char(base[0]);
			return ;
		}
		if (lnbr < 0)
		{
			put_char('-');
			lnbr = -lnbr;
		}
		print(lnbr, base_len, base);
	}
}
