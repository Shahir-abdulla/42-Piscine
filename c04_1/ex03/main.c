# include <stdio.h>
#include <string.h>

int ft_atoi(char *str);

int main(void)
{
    // char dest[15] = {'s','h','a','h','i', 'r', '\0'};
    // char dest2[15] = {'s','h','a','h','i', 'r', '\0'};
    // int a = 0;
    char *num = "   -+---------2147483647";

    // printf("The return value is %u \n", ft_strlcat(dest, src, 15));
    // printf("The return value from the real funcion is %ld \n",strlcat(dest2, src, 15));
	printf("%d",ft_atoi(num))  ;
    // printf("The value after is %s \n", dest);
    // printf("The real value after is %s \n", dest2);
}
