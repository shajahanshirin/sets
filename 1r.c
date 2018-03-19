#include<stdio.h>
int main()
{
    char s[100],b[100];
    int l=0,i,j;
    printf("enter character");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    j=0;
    for(i=l-1;i>=0;i--)
    {
    b[j++]=s[i];
    }
    printf("%s",b);
}
