#include <unistd.h>

void	print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
}

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		print(argv[1]);
	}
	write(1, "\n", 1);
}
