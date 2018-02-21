#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    do
    {
        n++;
    }while(n%10!=0);
    printf("%d",n);
    return 0;
}
