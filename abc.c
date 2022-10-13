#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],total;
        int i,j;
	

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		
	}

//for(i=0;i<3;i++)
//{
//	for(j=0;j<3;j++)
//	{
//		printf("%d\t",a[i][j],b[i][j]);
//	}
//	printf("\n");
//}

	
//printf("\t\ta \t\t\t\tb\t\ttotal \n========================================================================");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",a[i][j],b[i][j]);
	}
	printf("\n");
}
	
{
	
	total=a[i][j] + b[i][j];
	printf("\n%d \t\t\t%d \t\t%d",a[i][j],b[i][j],total);
	}
	printf("\n");
}

	
	
