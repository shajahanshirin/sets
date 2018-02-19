#include<stdio.h>
int main()
{
char s[50];
int count=0,i;
printf("enter string");
scanf("%s",&s);
for(i=0;i<strlen(s);i++)
{
	if(s[i]=='.'&&s[i]=' ')
{
	count++;
}
}
printf("%d",count);
}
