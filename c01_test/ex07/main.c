#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void print_(int *tab, int size)
{
	int count = 0;
	while (count < size){
		printf("%d",tab[count]);
		count ++;
	}
}

int	main(void)
{
	int	tab[] = {1,2,3,4,5, 6, 7, 8, 0, 2};
	int size = 10;

	print_(tab, size);
	printf("The changed value is");
	ft_rev_int_tab(tab,size);
	print_(tab, size);
	return (0);
}

