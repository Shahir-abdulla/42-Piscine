#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char    *src;
	char    dst[6];

	src = "shahir";
	printf("Value before %s \n", dst);
	ft_strcpy(dst, src);
	printf("Value after %s \n", dst);
}

