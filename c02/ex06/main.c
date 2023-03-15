#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char v[2];

	v[0] = 10;
	v[1] = 0;
	printf("%d\n", ft_str_is_printable("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_printable("980"));
	printf("%d\n", ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVWXYZ "));
	printf("%d\n", ft_str_is_printable(v));
}

