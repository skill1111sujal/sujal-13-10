#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5},n=5;
	int b[n], i;

	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	
	printf("The first array is :");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("\n");
	
	printf("The secound array is :");
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
} 