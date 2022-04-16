#include <stdio.h>
#include <stdlib.h>
int main()
{

  char *CurrencyPtr[50] = {
      তুমি আর, তুমি আর তুমি আর নেই সে তুমি জানি না, জানি না কেন এমনও হয়,
      জানি না
          জানি না,
      জানি না কেন এমনও হয়
          তুমি আর নেই সে তুমি
              তুমি আর,
      তুমি আর
          তুমি আর নেই সে তুমি।


  };

  int r, c;

  for (r = 0; r < 12; r++)
  {
    c = 0;
    while (*(CurrencyPtr[r] + c) != '\0')
    {
      printf("%c", *(CurrencyPtr[r] + c));
      c++;
    }
    printf("\n");
  }
  return 0;
}
