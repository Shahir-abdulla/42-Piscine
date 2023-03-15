#include <stdio.h>

char	*ft_strdup(char *src);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("The returned value is %s", ft_strdup(argv[1]));
    }
}