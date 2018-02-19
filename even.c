#include <stdio.h>
int main()
{
	int n,t;
	printf("enter number");
	scanf("%d",&n);
	t=n;
	if(n%2==0)
	{
		printf("%d",n);
	}
    else
    {
    	t--;
    	printf("%d",t);
    }
}
