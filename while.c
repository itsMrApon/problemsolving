#include<stdio.h>
#include<stdlib.h>

int main()
{
  int countdog;
  int hotdogs;
  int total;
  int average;
  countdog =0;
  total=0;

  while (countdog<7)
  {
    printf("tell me how many dog you ate today =");
    scanf("%d",&hotdogs);
    total = total + hotdogs;
    countdog = countdog+1;
  }
  average = total/7;
  printf("total number of dog you ate average is = %d", average);
  return 0;
  
}