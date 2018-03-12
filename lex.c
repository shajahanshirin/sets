#include<stdio.h>
int main()
{
    char a[10];
    int i,j,l,t;
    printf("enter string");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("sorted number:%s",a);
}
