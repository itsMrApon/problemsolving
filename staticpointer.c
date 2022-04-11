#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int a[5] = {15, 5, 6, 7, 8};
  printf("%d\n", a);
  printf("%d\n", *a);
  printf("%d\n", a + 1);
  printf("%d\n", *(a + 1));
  printf("%d\n", *a + 2);

  char b[15] = "hello world";
  printf("%d\n", b);
  printf("%d\n", *b);
  printf("%c\n", (b + 1));
  printf("%c\n", *b + 2);
  printf("%c\n", *(b + 2));
  printf("%s\n", b + 2);

  for (int i = 0; i < 12; i++)
  {
    printf("%s\n", b + i);
  }
