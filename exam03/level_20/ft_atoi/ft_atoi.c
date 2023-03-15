#include <stdio.h>

int	ft_atoi(const char *str)
{
    int sign;
    long number;

    sign = 1;
    number = 0;
    while (*str &&((*str >= 9 && *str <= 13) || *str == ' '))
        str ++;
    while (*str && (*str == '+' || *str == '-'))
    {
        if (*str == '-')
            sign *= -1;
        str ++;
    }
    while (*str && (*str >= '0' && *str <= '9'))
    {
        number = number * 10 + (*str - '0');
        str ++;
    }
    return ((int)(number * sign));
}

int main()
{
    printf("The number is %d\n", ft_atoi("   --2345"));
}