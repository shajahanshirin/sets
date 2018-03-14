#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("enter a,b,c value:");
    scanf("%d%d%d",&a,&b,&c);
    n=(a^b)%c;
    printf("%d",n);
}
