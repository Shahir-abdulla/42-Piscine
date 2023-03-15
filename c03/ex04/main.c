# include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char *src = "shahir";

    printf("The return value is %s \n", ft_strstr(src, "ah"));
    printf("The return value from the real funcion is %s \n",strstr(src, "ah"));
}
