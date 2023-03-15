# include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
    // char dest[15] = {'s','h','a','h','i', 'r', '\0'};
    // char dest2[15] = {'s','h','a','h','i', 'r', '\0'};
    char *src = "abcdef";

    printf("The value returned is %d \n", ft_strlen(src));

    // printf("The return value is %u \n", ft_strlcat(dest, src, 15));
    // printf("The return value from the real funcion is %ld \n",strlcat(dest2, src, 15));
    // printf("The value after is %s \n", dest);
    // printf("The real value after is %s \n", dest2);
}
