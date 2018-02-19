#include<stdio.h>
int main()
{
	int n,count=0,count1=0;
	printf("enter string");
	scanf("%s",&n);
	for(i=0;a[i]='\0',i++)
	{
		if(a[i]='a'&&a[i]='z'||a[i]='A'&&a[i]='Z')
		{
			count++;
		}
		else if(a[i]='0'&&a[i]='9')
		{
			count1++;
		}
	}
	if(count>1&&count1>1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
