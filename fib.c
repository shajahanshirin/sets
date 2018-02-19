#include<stdio.h>
int main()
{
int n,t1=0,t2=1,t;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
t=t1+t2;
t1=t2;
t2=t;
printf("%d",t1);
}
}
