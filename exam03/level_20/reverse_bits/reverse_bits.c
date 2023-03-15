#include <stdio.h>

// unsigned char	reverse_bits(unsigned char octet)
// {
//     return (octet >> 4 | octet << 4);
// }


// int main()
// {
//     unsigned char octet;

//     octet = 0b11001010;
//     printf("%u", reverse_bits(octet));
// }
unsigned char	reverse_bits(unsigned char octet)
{
	int				n;
	unsigned char	val;

	val = 0b00000000;
	n = 7;
	while (n >= 0)
	{
		val |= ((((1 << n) & octet) >> n) << (7 - n)); 
		n--;
	}
	return val;
}

int main()
{
	unsigned char octet;

	octet = 0b11001010;
	printf("%u", reverse_bits(octet));
}
