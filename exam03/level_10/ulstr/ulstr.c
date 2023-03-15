#include <unistd.h>

int is_upper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}


int is_lower(char c)
{
    if (c >= 'a'  && c <= 'z')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    char val;

    if (argc == 2)
    {
        while (*(argv[1]))
        {
            val = *(argv[1]);
            if  (is_lower(*(argv[1])))
                val = *(argv[1]) - 32;
            else if  (is_upper(*(argv[1])))
                val = *(argv[1]) + 32;
            write(1, &val, 1);
            argv[1] ++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
