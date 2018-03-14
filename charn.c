#include<stdio.h>
int main()
{
    int k=0,m,i,a;
    char n[20];
    printf("enter string");
    scanf("%s",&n[20]);
    printf("enter number");
    scanf("%d",&m);
    a=strlen(n);
    for(i=a-1;i>=0;i--)
    {
        k++;
        if(k>=m)
        {
            printf("%c",n[i]);
        }
    }
}
