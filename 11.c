#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    printf("enter day");
    scanf("%s",&c);
    if(c[0]=='s'||c[0]=='S')
    {
        printf("holiday");
    }
    else
    {
        printf("working day");
    }
}
