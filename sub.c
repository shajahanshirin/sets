#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter number");
	scanf("%d",&a);
	printf("\nenter 2 number");
	scanf("%d",&b);
	c=a-b;
	if(c%2==0)
	{
		printf("even");

	}
	else
	{
		printf("odd");
	}
}
