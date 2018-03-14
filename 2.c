#include<stdio.h>
int main()
{
    int f=1,n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial:%d",f);
}
