#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
	char s[28];

	int count = 0;
	while (count < 26)
	{
		s[count] = 100 + count;
		count ++;
	}
	s[count] = '\0';
	printf("%s\n", ft_strupcase(s));
}

