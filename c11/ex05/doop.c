/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 09:47:52 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/13 16:12:35 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include <unistd.h>

void	handle_div(t_f operation, int op1, int op2)
{
	if (op2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	ft_putnbr(operation(op1, op2));
}

void	hadle_mod(t_f operation, int op1, int op2)
{
	if (op2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	ft_putnbr(operation(op1, op2));
}

int	main(int argc, char **argv)
{
	t_f	operations[5];

	operations[0] = &add;
	operations[1] = &sub;
	operations[2] = &mul;
	operations[3] = &div;
	operations[4] = &mod;
	if (argc == 4)
	{
		if (argv[2][0] == '+' && !(argv[2][1]))
			ft_putnbr(operations[0](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '-' && !(argv[2][1]))
			ft_putnbr(operations[1](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '*' && !(argv[2][1]))
			ft_putnbr(operations[2](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '/' && !(argv[2][1]))
			handle_div(operations[3], ft_atoi(argv[1]), ft_atoi(argv[3]));
		else if (argv[2][0] == '%' && !(argv[2][1]))
			hadle_mod(operations[4], ft_atoi(argv[1]), ft_atoi(argv[3]));
		else
			write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}
