#include<stdio.h>
void main()
{
    int a,b;
    printf("enter 2 number");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("after swapping:%d %d",a,b);
}
