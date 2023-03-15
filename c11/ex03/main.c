/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:30:34 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/11 21:51:04 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

int add_one(char *str)
{
    while (*str)
    {
        if (*str == 's')
            return (1);
        str ++;
    }
    return (0);
}



int main()
{
    char **s;
    s = (char **)malloc(sizeof(char *) * 3);
    s[0]  = "hello";
    s[1] = "worlds";
    s[2] = "sir";

    printf("%d",ft_count_if(s, 3,  &add_one));
    // i = 0;
    // while (i < 5)
    // {
    //     printf("%d\n", arr[i]);
    //     i++;
    // }

}
