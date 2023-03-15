#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print(int nb)
{
	char	c;

	if (nb > 0)
	{
		print(nb / 10);
		c = nb % 10 + '0';
		put_char(c);
	}
}

void	put_nbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	print(nb);
}

void	put_str(char *str)
{
	while (*str)
	{
		put_char(*str);
		str ++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str)
	{
		put_str((*par).str);
		put_char('\n');
		put_nbr((*par).size);
		put_char('\n');
		put_str((*par).copy);
		put_char('\n');
		par ++;
	}
}



int main()
{
int n = 4;
char *s1 = "shahir";
char *s2 = "abdulla";
char *s3 = "hello";
char *s4 = "Dear";
char **s;

s = (char **)malloc(sizeof(char *) * n);
s[0] = s1;
s[1] = s2;
s[2] = s3;
s[3] = s4;

struct s_stock_str *arr = ft_strs_to_tab(n, s);
ft_show_tab(arr);
}
