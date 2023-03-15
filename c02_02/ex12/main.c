#include <stdio.h>
#include <string.h>

void    *ft_print_memory(void *addr, unsigned int size);

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
	unsigned char    src[] = "You will also need to ensure that yonu use your compiler\nin a C99-compatible mode (for example, using the -std=gnu99 option to gcc). Also shad";

	src[2] = 200;
	ft_print_memory((void *)src, 1);
	// char    dst[10] = "shahir    ";
	// char	dstr[10] = "shahir    ";
	// dst[5] = 's';
	// dstr[5] = 's';
	// src = "shahir\n\t@";
	// src[0] = 05;
	// src[1] = 30;
	// src[2] = 25;
	// src[3] = 56;
	// src[4] = 0;
	// printf("Value src \n");
	// print_ascii(src,11);

	// printf("dst Value before \n");
	// print_ascii(dst,11);
	// printf("dstr Value before \n");
	// print_ascii(dstr,11);
	// printf("value before %p \n", (void *)dst);
	// printf("real value befre %p \n", (void *)dstr);

	// ft_putstr_non_printable(src);
	// ft_putstr_non_printable(src);
	// printf("Value after \n");
	// print_ascii(dst,11);
	// printf("Real Value after \n");
	// print_ascii(dstr, 11);

	// printf("value returned %d \n", rtn);
	// printf("real value returned %d \n", rtnr);
}