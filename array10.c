#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],i,j,x,y;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}printf("\n");

	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("b[%d][%d]:",x,y);
			scanf("%d",&b[x][y]);
		}
	}printf("\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
                  printf("%d\t",a[i][j]);
		}		
		printf("\n");
	}
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
		
                  printf("%d\t",b[x][y]);
		}		
		printf("\n");
	}
	
}
}

	