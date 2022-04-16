#include<stdio.h>
#include<stdlib.h>
int main(){

char *CurrencyPtr[50] = {
    "                           **************************",
    "                           *   Enter 1: Taka        *",
    "                           *   Enter 2: Ruppe       *",
    "                           *   Enter 3: Dollar      *",
    "                           *   Enter 4: Pound       *",
    "                           *   Enter 5: Euro        *",
    "                           *   Enter 6: Swiss Franc *",
    "                           *   Enter 7: Yen         *",
    "                           *   Enter 8: Riyal       *",
    "                           *   Enter 9: AUD         *",
    "                           *   Enter 10: CAD        *",
    "                           **************************",
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