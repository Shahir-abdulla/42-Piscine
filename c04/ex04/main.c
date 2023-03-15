# include <stdio.h>
#include <string.h>

void    ft_putnbr_base(int nbr, char *base);

int main(void)
{
    // char dest[15] = {'s','h','a','h','i', 'r', '\0'};
    // char dest2[15] = {'s','h','a','h','i', 'r', '\0'};
    // int a = 0;
    int num = -60;

    // printf("The return value is %u \n", ft_strlcat(dest, src, 15));
    // printf("The return value from the real funcion is %ld \n",strlcat(dest2, src, 15));
    ft_putnbr_base(num , "0123456789"); //poneyvif
    // printf("The value after is %s \n", dest);
    // printf("The real value after is %s \n", dest2);
}
