#include<stdio.h>
int main()
{
    int a,b,x,y,temp,ans;
    scanf("%d %d",&a,&b);
    x=a;y=b;
    while(y!=0)
    {
        temp=y;
        y=x%y;
        x=temp;
    }
    ans=(a*b)/x;
    printf("%d",ans);
}
