#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int length;
    char *cpy;

    length = 0;
    while (src[length])
        length ++;
    cpy = (char *)malloc(sizeof(char) * (length+1));
    length = 0;
    while (src[length])
    {
        cpy[length] = src[length];
        length ++;
    }
    cpy[length] = '\0';
    return (cpy);
}


int main()
{
    char *s = "shahir abdulla";
    printf("%s",ft_strdup(s));
}