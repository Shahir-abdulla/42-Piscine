#include <unistd.h>

int	get_count(char c)
{
	int	count;

	count = 1;
	if (c > 'a' && c < 'z')
		count += (c - 'a');
	else if (c > 'A' && c < 'Z')
		count += (c - 'A');
	return (count);
}

void	print(char *str)
{
	int	count;

	while (*str)
	{
		count = get_count(*str);
		while (count > 0)
		{
			write(1, str, 1);
			count--;
		}
		str ++;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		print(argv[1]);
	write(1, "\n", 1);
}
