#include<stdio.h>
int fun(int n)
{
    printf("\nInside function :%d",n);
    if(n<5)
{
    n++;
 fun(n);

}
else
return 0;
printf("\noutside function :%d",n);
}

int main()
{
    fun(1);

}















