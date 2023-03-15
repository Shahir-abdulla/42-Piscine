#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 12;
	printf("Value before is %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("Value after is %d, %d\n", a, b);
}
