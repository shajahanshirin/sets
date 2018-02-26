#include<stdio.h>
int main()
{
  int n,r,l;
  printf("enter number");
  scanf("%d %d",&r,&l);
  printf("enter number");
  scanf("%d",&n);
  if(n>r&&n<l)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
