#include <unistd.h>

int main(int argc, char **argv)
{
    char c;

    if (argc == 2)
    {
        while (*argv[1])
        {
            c = *argv[1];
            if ( (*argv[1] >= 'a' && *argv[1] <= 'y') || (*argv[1] >= 'A' && *argv[1] <= 'Y'))
                c = *argv[1] + 1;
            else if (*argv[1] == 'z' || *argv[1] == 'Z' )
                c = *argv[1] - 25;
            write(1, &c, 1);
            argv[1] ++;
        }
    }
    write(1, "\n", 1);
}