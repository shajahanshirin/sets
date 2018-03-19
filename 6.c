#include<stdio.h>
int main()
{
    char s1[100];
    int i,j,t=0;
    printf("enter str");
    scanf("%s",&s1);
    for(i=0;i<='\0';i++)
    {
        for(j=i+1;j<='\0';j++)
        {
            if(s1[i]==s1[j])
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
}
