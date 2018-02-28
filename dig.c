#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        n=n/10;
        count=count+i;
        count++;
    }
    printf("%d",count);
    return 0;
}
