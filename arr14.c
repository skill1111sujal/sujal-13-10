#include<stdio.h>
void main()
{
	int i,j,row,colum,a[10][10],flag=1;

	printf("\n Enter number of row and colum :");
	scanf("%d  %d",&i,&j);

	printf("\n Enter the matrix element");
	for(row=0;row<i;row++)
	{
		for(colum=0;colum<i;colum++)
		{
			scanf("%d",&a[row][colum]);
		}
	}
	
	for(row=0;row<i;row++)
	{
		for(colum=0;colum<i;colum++)
		{
			if(a[row][colum]!=1 && a[colum][row]!=0)
			{
				flag=0;
				break;
			}
		}
	}
	
	if(flag==1)
	{
		printf("\n Enter matrix that you enterd is an identy matrix ");
	}
	else
	{
		printf("\n The matrix that you enterd is not identy matrix");
	}
}