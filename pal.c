#include<stdio.h>
int main()
{
  char s[20],s1;
  printf("enter string");
  scanf("%s",&s);
  strcpy(s1,s);
  a=strrev(s);
  if(strcmp(a,s)==0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
