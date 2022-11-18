#include<stdio.h>
void main()
{
	int row,col,num;
	for(row=0;row<num;row++)
	{
		for(col=0;col<num;col++)
		{
			if(row==col)
			{
				printf("%d",1);
			}
			else
			{
				printf("%d",0);
			}
			printf("\n");
		}
	}
}