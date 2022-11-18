#include<stdio.h>
int add()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    return a+b;
}
int main()
{
    int x=add();
    printf("addition of a and b is :%d\n",x);
}