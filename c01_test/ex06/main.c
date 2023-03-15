#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *s;

	s = "1234567!@#4";
	printf("The string %s has %d chars", s, ft_strlen(s));
	return (0);
}

