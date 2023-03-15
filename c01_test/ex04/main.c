#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 7;
	printf("Value before is %d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Value after is %d, %d\n", a, b);
}
