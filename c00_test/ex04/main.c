#include <stdio.h>

void	ft_is_negative(int n);

int main(void)
{
    printf("The first positive number: ");
    ft_is_negative(8);
    printf("\n");

    printf("The first negative number:");
    ft_is_negative(-8);
    printf("\n");
    return (0);
}