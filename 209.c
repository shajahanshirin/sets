#include<stdio.h>
int main()
{
    int a,l,m,n;
    printf("enter a,b,c value:");
    scanf("%d%d%d",&l,&m,&n);
    a=(l^m)%n;
    printf("%d",a);
}
