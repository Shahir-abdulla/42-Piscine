#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

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
	char    src[21];
	// char    dst[10] = "shahir    ";
	// char	dstr[10] = "shahir    ";

	// dst[5] = 's';
	// dstr[5] = 's';
	// src = "shahir\n\t@";
	int i = 0;
	char *test = "Coucou\n\tu vas bien ?";
	while (i<20)
	{
		src[i] = test[i];
		i++;
	}
	src[i-1] = '\0';


	// src[0] = 05;
	// src[1] = 30;
	// src[2] = 25;
	// src[3] = 56;
	// src[4] = 49;
	// src[5] = 127;
	// src[6] = 'a';
	// char	*src = "shahir";
	printf("Value src \n");
	print_ascii(src, 21);

	// printf("dst Value before \n");
	// print_ascii(dst,11);
	// printf("dstr Value before \n");
	// print_ascii(dstr,11);
	// printf("value before %p \n", (void *)dst);
	// printf("real value befre %p \n", (void *)dstr);

	ft_putstr_non_printable(src);
	// ft_putstr_non_printable(src);
	// printf("Value after \n");
	// print_ascii(dst,11);
	// printf("Real Value after \n");
	// print_ascii(dstr, 11);

	// printf("value returned %d \n", rtn);
	// printf("real value returned %d \n", rtnr);
}