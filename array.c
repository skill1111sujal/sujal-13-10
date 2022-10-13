#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\t arr[%d] :%d",i,arr[i]);
	}
}	