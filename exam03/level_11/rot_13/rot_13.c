#include <unistd.h>

int is_first(char c)
{
    if ((c >= 'A' && c <= 'N') || (c >= 'a' && c <= 'n'))
        return (1);
    return (0);
}

int is_last(char c)
{
    if ((c >= 'M'  && c <= 'Z') || (c >= 'm'  && c <= 'z'))
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
            if  (is_first(*(argv[1])))
                val = *(argv[1]) + 13;
            else if  (is_last(*(argv[1])))
                val = *(argv[1]) - 13;
            write(1, &val, 1);
            argv[1] ++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
