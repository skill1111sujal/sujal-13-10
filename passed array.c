#include<stdio.h>
#define n 5

void Disarray(int a[])
{
    int i;
    for(int i=0;i<n;i++)
    {
       printf("\t%d",a[i]);

    }

}
int main()
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);

    }
    Disarray(a);

}