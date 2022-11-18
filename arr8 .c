#include<stdio.h>
void main()
{
	int arr[12][12],row,col,sum,i,j;
	printf("Your matrix row=");
	scanf("%d",&row);
	printf("\n Your matrix columnb=");
	scanf("%d",&col);

	printf("Enter the element of the matrix");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\n arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d \t",arr[i][j]);
		}printf("\n");

	printf("\n");
		for(i=0;i<row;i++)
		{
			


			sum=sum+arr[i][j];
		}
	printf("the sum of the diagonal is =%d",sum);
	}
}

	