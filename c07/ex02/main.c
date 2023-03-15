#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int **arr;
		
		arr = (int **)malloc(sizeof(int *));
		// int min = atoi(argv[1]);
		// int max  = atoi(argv[2]);
		int val = ft_ultimate_range(arr, 1, 10);
		//printf("%d", **(arr+3));
		/*printf("The returned val is %d\n", val);
		int count = 0;
		while (count < val)
		{
			printf("%d, ", arr[count]);
			count ++;
		}*/
	}
}
