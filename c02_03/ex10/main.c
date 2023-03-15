#include <stdio.h>
#include <string.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

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
	char    dst[8] = {'s', 'a'};
	char    dstr[8] = {'s', 'a'};
	// unsigned int	val = 0;

	// dst[5] = 's';
	// dstr[5] = 's';
	src = "shahir";
	// printf("Value src \n");
	// print_ascii(src,11);

	// printf("dst Value before \n");
	// print_ascii(dst,11);
	// printf("dstr Value before \n");
	// print_ascii(dstr,11);
	// printf("value before %p \n", (void *)dst);
	// printf("real value befre %p \n", (void *)dstr);

	// unsigned int rtn = 
	ft_strlcpy(dst, src, 4);
	// unsigned int rtnr = 
	strlcpy(dstr, src, 4);
	printf("Value after %s\n", dst);
	printf("Value after real %s\n", dstr);
	// print_ascii(dst,11);
	// printf("Real Value after \n");
	// print_ascii(dstr, 11);
	// printf("value returned %d \n", rtn);
	// printf("real value returned %d \n", rtnr);
}