
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sub(int a, int b, int c)
{
  int sub = a - b - c;
  return sub;
}

int main()
{
  int x = 10, y = 5, z = 3;
  int p = sub(x, y, z);
  printf("%d\n", p);
}