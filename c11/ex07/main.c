#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int main()
{
	char	**s;
	s = (char **)malloc(sizeof(char *) * 4);
	s[0] = "shah";
	s[1] = "sha";
	s[2] = "sh";
	s[3] = 0;
	int i = 0;
	ft_advanced_sort_string_tab(s, (int (*)(char *, char *))&strcmp);
	while (i < 3)
	{
		printf("%s\n", s[i]);
		i++;
	}
}
