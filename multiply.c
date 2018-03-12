#include<stdio.h>
int main()
{
    int a,n,m=1;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        m=m*a;
        n=n/10;
    }
    printf("%d",m);
}
