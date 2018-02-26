#include <stdio.h>
int main()
{
	int a,s;
	printf("enter number");
	scanf("%d",&a);
	s=a;
	if(a%2==0)
	{
		printf("%d",a);
	}
    else
    {
    	s--;
    	printf("%d",s);
    }
}
