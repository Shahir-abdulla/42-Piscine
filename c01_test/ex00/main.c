#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int	v;
	int *p;
	
	v = 100;
	p = &v;
	*p = 5;
	printf("Value before is %d\n", v);
	ft_ft(&v);
	printf("Value after is %d\n", v);
}
