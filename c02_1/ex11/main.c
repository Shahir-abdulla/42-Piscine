#include <stdio.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);

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

int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0nsd");
	ft_putchar('\n');
	ft_putstr_non_printable("");
}
