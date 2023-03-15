/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:30:34 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/11 16:42:36 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int add_one(int a)
{
    return (a-5);
}



int main()
{
    int  s[5] = {1 ,2, 3, 4, 5};
    int i;

    int *arr =  ft_map(s, 5, &add_one);
    i = 0;
    while (i < 5)
    {
        printf("%d\n", arr[i]);
        i++;
    }

}