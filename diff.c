#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,l,m,n;
    printf("enter number of members in kabali's team:");
    scanf("%d %d",&a,&b);
    printf("enter members in ninja's team:");
    scanf("%d %d",&c,&d);
    scanf("%d %d",&e,&f);
    l=b-a;
    m=d-c;
    n=f-e;
    printf("%d\n",l);
    printf("%d\n",m);
    printf("%d\n",n);
    return 0;
    
}
