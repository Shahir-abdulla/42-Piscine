# include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char *str = "shahi";
    char *str2 = "shahir";

    printf("The return value is %d \n", ft_strncmp(str, str2, 8));
    printf("The return value from the real funcion is %d \n",strncmp(str, str2, 8));
}