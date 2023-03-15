#include <stdio.h>


void	ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a= 10;
    int b = 20;

    ft_swap(&a, &b);
    printf("The value of ais %d, and b is %d", a, b);

}