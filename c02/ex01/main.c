#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

void print_ascii(char *str, int n)
{
	int count = 0;
	while (count < n)
	{
		printf("%d ", str[count]);
		count++;
	}
	printf("\n");
}

int main()
{
	char    *src;
	char    dst[10] = "before";
	// char	dstr[10] = "shahir";

	// dst[5] = 's';
	// dstr[5] = 's';
	src = "after";
	// printf("Value src \n");
	// print_ascii(src,7);

	// printf("dst Value before \n");
	// print_ascii(dst,7);
	// printf("value before %p \n", (void *)dst);
	// printf("real value befre %p \n", (void *)dstr);

	// char *rtn = 
	ft_strncpy(dst, src, 7);
	// char *rtnr = strncpy(dstr, src, 7);
	printf("Value after \n");
	print_ascii(dst,7);
	// printf("Real Value after \n");
	// print_ascii(dstr, 7);

	// printf("value returned %p \n", (void *)rtn);
	// printf("real value returned %p \n", (void *)rtnr);
}

