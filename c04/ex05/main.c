# include <stdio.h>
#include <string.h>

int	ft_atoi_base(char *str, char *base);
#include <limits.h>

int main(void)
{

    // char dest[15] = {'s','h','a','h','i', 'r', '\0'};
    // char dest2[15] = {'s','h','a','h','i', 'r', '\0'};
    // int a = 0;
    // char* val = "1010";

    // printf("The return value is %u \n", ft_strlcat(dest, src, 15));
    // printf("The return value is %d\n", ft_atoi_base(val , "01")) ; //poneyvif
    printf("The return value is %d\n", ft_atoi_base("2345" , "0123456789abcdef")) ; //poneyvif
    printf("The return value is %d\n", ft_atoi_base("12345678" , "0123456789")) ; //poneyvif
    printf("The return value is %d\n", ft_atoi_base("12  " , "01234567")) ; //poneyvif
    // printf("The return value is %d\n", ft_atoi_base("fffffffffff" , "0123456789abcdef")) ; //poneyvif
    // printf("The return value is %d\n", ft_atoi_base(val , "01")) ; //poneyvif
    // printf("The value after is %s \n", dest);
    // printf("The real value after is %s \n", dest2);
    	// int k = -2147483648 ;
        // long 
        // int j = (int)k;
        // printf("%d", j);
}
