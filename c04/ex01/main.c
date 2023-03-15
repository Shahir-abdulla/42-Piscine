# include <stdio.h>
#include <string.h>

void ft_putstr(char *str);

int main(void)
{
    // char dest[15] = {'s','h','a','h','i', 'r', '\0'};
    // char dest2[15] = {'s','h','a','h','i', 'r', '\0'};
    char *src = "abcdefght";

    // printf("The return value is %u \n", ft_strlcat(dest, src, 15));
    // printf("The return value from the real funcion is %ld \n",strlcat(dest2, src, 15));
	ft_putstr(src);
    // printf("The value after is %s \n", dest);
    // printf("The real value after is %s \n", dest2);
}
