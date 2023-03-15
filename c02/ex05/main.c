#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main()
{
	printf("%d\n", ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_uppercase("980"));
	printf("%d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
}

