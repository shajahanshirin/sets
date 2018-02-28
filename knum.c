#include<stdio.h>
int main()
{
    int a,k,i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
    }
    printf("enter another value");
    scanf("%d",&k);
    for(i=0;i<=n;i++)
    {
    if(k==a)
    {
        printf("yes");
        break;
    }
    else
    {
        printf("no");
        break;
    }
    }
}
