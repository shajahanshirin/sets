#include<stdio.h>
int main()
{
    int a,b,a1,c,d,c1;
    scanf("%d %d",&a,&b);
    printf("%d / %d",a,b);
    scanf("%d  %d",&c,&d);
    printf("%d % %d",c,d);
    a1=a/b;
    c1=c%d;
    printf("\n%d",a1);
    printf("\n%d",c1);
}
