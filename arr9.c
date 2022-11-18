#include<stdio.h>
void main()
{
	int arr[5][5];
	int i,j,col,row,sum=0;
	
	printf("Enter the number of row and col for 1st matrix\n");
	printf("your matrix row=");
	scanf("%d",&row);
	printf("\n your matrix columb= ");
	scanf("%d",&col);
	
	printf("Enter the element of the matrix\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\n arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("The matrix\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(j>i)
			{
				sum+=arr[i][j];
			}
		}
	}
printf("sum of upper triangle = %d",sum);




}
