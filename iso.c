#include<stdio.h>
int main()
{
    char a[50];
    int t=0,i,j;
    printf("enter string");
    scanf("%s",&a);
    for(i=0;i<='\0';i++)
    {
        for(j=i+1;j<='\0';j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
    }
    if(t==0)
    {
        printf("isogram");
    }
    else
    {
        printf("not isogram");
    }
    return 0;
}
