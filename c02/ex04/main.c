#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main()
{
	printf("%d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_lowercase("980"));
	printf("%d\n", ft_str_is_lowercase("AB"));
}

