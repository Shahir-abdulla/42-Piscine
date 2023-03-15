#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int	v = 10;
	int *vv = &v;
	int **vvv = &vv;
	int ***vvvv = &vvv;
	int ****vvvvv = &vvvv;
	int *****vvvvvv = &vvvvv;
	int ******vvvvvvv = &vvvvvv;
	int *******vvvvvvvv = &vvvvvvv;
	int ********vvvvvvvvv = &vvvvvvvv;

	printf("Value before is %d\n", ********vvvvvvvvv);
	ft_ultimate_ft(&vvvvvvvvv);
	printf("Value after is %d\n", ********vvvvvvvvv);
}
