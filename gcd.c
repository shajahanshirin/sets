#include<stdio.h>
int main()
{
    int a,b,x,y,temp,ans;
    scanf("%d %d",&a,&b);
    x=a;y=b;
    while(x!=0)
    {
        temp=x;
        x=x%y;
        y=temp;
    }
    ans=(a*b)/y;
    printf("%d",ans);
}
