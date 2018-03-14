#include<stdio.h>
int main()
{
    int a[2][2],i,j,sum=0,s=0,p;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            else
            {
                s=s+a[i][j];
            }
        }
    }
    p=sum*s;
    printf("product:%d",p);
}
