#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int min = atoi(argv[1]);
		int max  = atoi(argv[2]);
		int *arr = ft_range(min, max);

		int count = 0;
		while (count < (max - min))
		{
			printf("%d, ", arr[count]);
			count ++;
		}
	}
}
