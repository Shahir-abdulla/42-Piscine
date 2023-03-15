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

int check_if_present(char *str,char c)
{
    while (*str)
    {
       if (*str == c)
            return (1);
        str++;   
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
        if(check_double(str1, i) == 0)
             write(1, &str1[i], 1);
        i++;
    } 
    j = 0;
    while(str2[j])
    {
        if (check_if_present(str1, str2[j]) == 0)
            if (check_double(str2, j) == 0)
                write(1, &str2[j], 1);
        j++;
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