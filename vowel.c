#include<stdio.h>
int main()
{
    char s[30];
    int i,n;
    printf("enter string");
    scanf("%d",s);
    for(i=0;i<=n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}
