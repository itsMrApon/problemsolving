#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b)
{
  int sum = a + b;
  return sum;
}

int main()
{
  int x = 10, y = 5;
  int z = add(x, y);
  printf("%d\n", z);
}