#include<stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
