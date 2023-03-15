#include <stdio.h>

int	get_word_count(char *str, char *charset);
char	**ft_split(char *str, char *charset);

int main(void)
{
   char **words;

   words = ft_split("shahir abdulla. This is the last sentense .of many sentence to come. shahir........ ", ". ");
   while (*words)
   {
      printf("%s\n", *words);
      words++;
   }
}
