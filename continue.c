#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i < 10; i++)
    {
        if(i==3 || i==8)
        {
            continue;
        }
        printf("%d ",i);
    }
}