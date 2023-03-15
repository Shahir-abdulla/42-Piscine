# include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char dest[15] = {'s','h','a','h','i', 'r', '\0'};
    char dest2[15] = {'s','h','a','h','i', 'r', '\0'};
    char *src = "abd";

    printf("The return value is %s \n", ft_strncat(dest, src, 5));
    printf("The return value from the real funcion is %s \n",strncat(dest2, src, 5));
}
