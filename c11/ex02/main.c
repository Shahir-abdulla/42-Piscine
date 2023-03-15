/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:30:34 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/11 21:41:18 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

int add_one(char *str)
{
    (void) str;
    printf("%s\n", str);
    return (100);
}



int main()
{
    char **s;
    s = (char **)malloc(sizeof(char *) * 3);
    s[0]  = "shahir";
    s[1] = "abdulla";
    s[2] = 0;

    printf("%d",ft_any(s, &add_one));
    // i = 0;
    // while (i < 5)
    // {
    //     printf("%d\n", arr[i]);
    //     i++;
    // }

}
