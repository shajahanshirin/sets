#include<stdio.h>
int main()
{
  int n,i,d,s,t;
  printf("enter number");
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    s=(s*10)+d;
    n=n/10;
  }
  while(s!=0)
  {
    t=s%10;
    if(t%2!=0)
    {
      printf("%d\t",t);
    }
    s=s/10;
  }
  return 0;
}
