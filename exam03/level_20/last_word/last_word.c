#include <unistd.h>

void print(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i ++;
    i--;
    while ((str[i] == ' ' || str[i] == '\t') && i >= 0)
        i--;
    while (i >= 0 && str[i] != ' ' && str[i] != '\t')
        i--;
    i++;
    while(str[i] && str[i] != ' ' && str[i] != '\t')
      {
          write(1, &str[i], 1);
          i ++;
      }
}

int main(int argc, char **argv)
{
    if (argc ==2 )
    {
        print(argv[1]);
    }
    write(1, "\n", 1);
}