#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 30;
	b = 7;
	printf("Value before is %d, %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Value after is %d, %d, %d, %d\n", a, b, div, mod);
}
