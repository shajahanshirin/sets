#include<stdio.h>
int main()
{
    int a[10],i,j,t=0,m;
    printf("enter number");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(a[i]<a[j])
            {
            a[i]=t;
            t=a[j];
            a[j]=t;
            }
        }
    }
    for(i=1;i<=10;i++)
    {
        m=a[0];
    }
    printf("%d",m);
}
