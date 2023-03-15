/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:04:31 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/12 13:19:23 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		add(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);
typedef int	(*t_f)(int, int);

#endif