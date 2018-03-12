#include<stdio.h>
int main()
{
    char a[20];
    int i,l;
    printf("enter string");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
            printf("%c",a[i]);
        }
    } 
    
}
