#include<stdio.h>



//from a line search max

int main()
{
    int n, rem;
    scanf("%d", &n);
    int max =-10000000000000;
    while (n!=0)
    {
        rem = n%10;
        if (rem>max)
        {

            max= rem;
        }
        n/=10;
    }
    printf("%d", max);
}
