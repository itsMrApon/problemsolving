#include<stdio.h>



//max number form 3 int


int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b>c)
    {
        printf("%d", a);

    }
    else if (b>a && b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d", c);
    }
}
