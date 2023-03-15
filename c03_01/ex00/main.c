# include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
    char *str = "shahir ";
    char *str2 = "shahir";

    printf("The return value is %d \n", ft_strcmp(str, str2));
    printf("The return value from the real funcion is %d \n",strcmp(str, str2));
}