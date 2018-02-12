#include<stdio.h>
void main()
{
    int a,b,c,n;
    printf("enter the two number:");
    scanf("%d %d",&a,&b);
    c=a*b;
    n=c%2;
    if(n==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    return 0;
}
