#include<stdio.h>
int main()
{
    int a[2][2],i,j,p=1,p1=1,sum;
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
                p=p*a[i][j];
            }
            else
            {
                p1=p1*a[i][j];
            }
        }
    }
    sum=p+p1;
    printf("sum:%d",sum);
}
