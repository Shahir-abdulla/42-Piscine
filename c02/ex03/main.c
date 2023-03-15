#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	printf("%d\n", ft_str_is_numeric("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("%d\n", ft_str_is_numeric("980"));
}

