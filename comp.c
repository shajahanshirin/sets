#include<stdio.h>
int main()
{
    int count=0,i,a;
    printf("enter number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
        count++;
    }
    }
    if(count==2)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}
