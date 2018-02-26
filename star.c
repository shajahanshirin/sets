#include<stdio.h>
#include<string.h>
int main()
{
  char a[20];
  int b,c;
  printf("enter string");
  scanf("%s",&a);
  b=strlen(a);
  c='*';
  a[b/2]=c;
  if(b%2==0)
  {
    a[(b-1)/2]=c;
  }
  printf("%s",a);
  return 0;
}
  
  
