#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  int a = 25;
  scanf("%d", &a);
  int b = 10;
  scanf("%d", &b);
  int sum = 0;

  int *p;
  int *q;
  p = &a;
  q = &b;

  sum = (*p + *q);
  printf("%d", sum);

  return 0;
}