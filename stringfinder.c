#include <stdio.h>
#include <stdlib.h>
// kono name er modhhee p ase ki na ta bhair korar jonno

int main()
{
  char str[25] = "";
  int i;

  gets(str);
  for (i = 0; str[i] != '\0'; i++)
    if (str[i] == 'p')
    {
      puts("ACHHE");
    }

    else
    {
      puts("NAI");
    }

  return 0;
}