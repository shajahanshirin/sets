#include<stdio.h>
int main()
{
   char a[20];
   int t=0,n,i;
   printf("ënter number");
   scanf("%s",&a);
   n=strlen(a);
   n=t;
   for(i=0;a[i]='\0';i++)
   {
   if((a=='0')||(a=='1'))
{
    t++;
    printf("binary number");
}
else
{
    printf("not a binary number");
}
}
}
