#include<stdio.h>
int main()
{
    char s[20];
    int i;
    printf("enter character");
    scanf("%s",&s);
    
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]!='\0')
       {
        printf("%c",s[i]);
       }
    }
     printf(".");
}
