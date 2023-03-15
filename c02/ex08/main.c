#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
	char s[28];
	int	count = 0;

	while (count < 26)
	{
		s[count] = 65 + count;
		count ++;
	}
	s[26] = 's';
	s[27] = '\0';
	printf("%s\n", ft_strlowcase(s));
}
