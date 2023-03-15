# include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char str[15] = {'s','h','a','h','i', 'r', '\0'};
    char strl[15] = {'s','h','a','h','i', 'r', '\0'};
    char *src = " Abdulla";

    printf("The return value is %s \n", ft_strcat(str, src));
    printf("The return value from the real funcion is %s \n",strcat(strl, src));
}
