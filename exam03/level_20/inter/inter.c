#include <unistd.h>
#include <stdio.h>

int check_double(char *hay,int pos)
{
    int index;

    index = 0;
    while (index < pos)
    {
        if (hay[index] == hay[pos])
            return (1);
        index ++;
    }
    return (0);
}

void print_without_doubles(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    while (str1[i])
    {
        j = 0;
        while(str2[j])
        {
            if (str1[i] == str2[j])
            {
                if (check_double(str1, i) == 0)
                    write(1, &str1[i], 1);
                 break ;
            }
            j++;
        }
        i ++;
    }
}


int main(int argc, char **argv)
{
    if (argc == 3)
    {
        print_without_doubles(argv[1], argv[2]);
    }
    write(1 , "\n", 1);
}