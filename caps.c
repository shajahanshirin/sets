#include<stdio.h>
int main()
{
char a[20],b[20];
int l,i;
printf("enter character");
scanf("%s",&a);
l=strlen(a);
a[0]=a[0]-32;
printf("%d",a[0]);
for(i=1;i<=l;i++)
{
    if(a[i]=' ')
    {
        b[i]=a[i+1]-32;
        printf("%c",b[i]);
    }
    else
    {
        printf("%c",a[i+1]);
    }
}
}
