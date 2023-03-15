#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	printf("%d\n", ft_str_is_alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("%d\n", ft_str_is_alpha("abd"));
}

