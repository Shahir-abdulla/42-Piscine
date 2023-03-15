unsigned char	reverse_bits(unsigned char octet)
{
    return (octet >> 4 | octet << 4);
}


int main()
{
    unsigned char octet;

    octet = 0b11001010;
    printf("%u", reverse_bits(octet));
}