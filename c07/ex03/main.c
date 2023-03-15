#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 4;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (7 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (15 + 1));
	strs[3] = (char *)malloc(sizeof(char) * (10 + 1));
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	strs[3] = "and superb";
	separator = ":)";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
