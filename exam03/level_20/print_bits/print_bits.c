#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int n;
    
    n = 7; 
    while (n >= 0)
    {
        if (((1 << n) & octet) >= 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        n--;
    }
}

int main()
{
    print_bits(255);
}