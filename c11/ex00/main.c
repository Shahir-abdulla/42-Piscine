/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:30:34 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/11 20:46:47 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void add_one(int a)
{
    printf("%d\n", a);
}



int main()
{
    int  s[5] = {1 ,2, 3, 4, 5};

    ft_foreach(s, 5, &add_one);
    // i = 0;
    // while (i < 5)
    // {
    //     printf("%d\n", arr[i]);
    //     i++;
    // }

}