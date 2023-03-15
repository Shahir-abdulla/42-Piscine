#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void print_(int *tab, int size)
{
	int count = 0;
	while (count < size){
		printf("%d, ",tab[count]);
		count ++;
	}
}

int	main(void)
{
	int	tab[] = {1,0,26,4,9, 9, 7, 8, 65, 22};
	int size = 10;

	print_(tab, size);
	printf("The changed value is");
	ft_sort_int_tab(tab,size);
	print_(tab, size);
	return (0);
}

