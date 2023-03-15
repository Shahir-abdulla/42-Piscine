#include <unistd.h>

char get_replace(char c)
{
    int val;

    val = c - 'a' + 1;
    if (val >= 13)
        val = 13 - (val - 13);
    else if (val < 13)
        val = 13 + (13 - val);
    return ( val + 'a');
}


void replace_print(char *str)
{
    while (*str)
    {
        char c = get_replace(*str);
        write(1, &c, 1);
        str ++;
    }
}


int main(int argc, char **argv)
{
    if (argc ==2 )
    {
        replace_print(argv[1]);
    }

    write(1, "\n", 1);
}