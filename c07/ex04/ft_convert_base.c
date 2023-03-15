/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 08:31:31 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/08 10:09:54 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
char	get_base_lengh_if_correct(char *base);

int	lenght_nbr(int nbr, int lenght, int base_length)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_length)
	{
		nb /= base_length;
		lenght++;
	}
	lenght++;
	return (lenght);
}

void	fill_array(char *to_num, long int nbr, char *base, int *index)
{
	int	base_len;

	base_len = get_base_lengh_if_correct(base);
	if (nbr > 0)
	{
		fill_array (to_num, nbr / base_len, base, index);
		to_num[*index] = base[nbr % base_len];
		(*index) = (*index) + 1;
	}
}

char	*ft_getnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	lnbr;
	int			size;
	char		*to_num;
	int			index;

	lnbr = (long)nbr;
	index = 0;
	base_len = get_base_lengh_if_correct(base);
	size = lenght_nbr(nbr, 0, base_len);
	to_num = (char *)malloc(sizeof(char) * (size + 1));
	if (lnbr == 0)
	{
		to_num[0] = '\0';
		return (to_num);
	}
	if (lnbr < 0)
	{
		to_num[0] = '-';
		index ++;
		lnbr = -lnbr;
	}
	fill_array(to_num, lnbr, base, &index);
	to_num[index] = '\0';
	return (to_num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (get_base_lengh_if_correct(base_from) == 0)
		return (0);
	if (get_base_lengh_if_correct(base_to) == 0)
		return (0);
	return (ft_getnbr_base(ft_atoi_base(nbr, base_from), base_to));
}
