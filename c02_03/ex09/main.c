#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char s[60] = "i ca \t be vEry+good sOmeTime   ).s als0 noThi+ng *09 and_=s";
	// int	count = 0;

	// char *temp = "i ca \t be vEry+good sOmeTime   ).s als0 noThi+ng *09 and_=s";

	// while (count < 60)
	// {
	// 	s[count] = temp[count];
	// 	count ++;
	// }
	// s[count] = '\0';
	printf("%s\n", ft_strcapitalize(s));
}
