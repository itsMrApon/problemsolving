#include<stdio.h>



//swap kora
    int swap( int n1, int n2)
    {
        int *p1, *p2;
        p1 = &n2;
        p2 = &n1;
        printf("%d %d", *p1, *p2);
    }


int main()
{
    int n1, n2;
    scanf("%d %d", &n1 ,&n2 );
    int s  =  swap(n1, n2);

}
