#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int a = 25;
  // int p=20;
  int *p;
  p = &a;

  printf("%d\n", a);
  printf("%d\n", &a);
  printf("%d\n", p);
  printf("%d\n", &p);
  printf("%d\n", *p);

  return 0;
}