#include <stdio.h>
#include <stdlib.h>
// line e koyta word ase show koraw

int main()
{
  char str[25];
  int i;
  int count = 0;

  gets(str);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (i != 0 && str[i] == ' ' && str[i - 1] != ' ')
    {
      count = count + 1;
    }
  }

  printf("line a %d word ase", count + 1);

  return 0;
}
