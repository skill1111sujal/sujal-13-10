#include<stdio.h>
int main()
{
	int maths[5],english[5],science[5];
	int i,sum;
	float per;
	for(i=0;i<5;i++)
	{
		printf("MATHS[%d]=",i);
		scanf("%d",&maths[i]);
	}printf("\n");
	for(i=0;i<5;i++)
	{
		printf("ENGLISH[%d]=",i);
		scanf("%d",&english[i]);
	}printf("\n");
	for(i=0;i<5;i++)
	{
		printf("SCIENCE[%d]=",i);
		scanrf("%d",&science[i]);
	}
	
	printf("MATHS\tENGLISH SCIENCE\tTOTAL\tPER\tGRADE");
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",maths[i]);
		printf("\t%d",english[i]);
		printf("\t%d",science[i]);

	Sum=maths[i]+english[i]+science[i];
	printf("\t%d",sum);

	per=(maths[i]+english[i]+science[i])/3;
	printf("\t%0.2f",per);

	if(maths[i]<35||english[i]<35||science[i]<35||per<35)
	{
		printf("\tfail");
	}
	else if(per>80)
	{
		printf("\tA");
	}
	else if(per>60)
	{
		printf("\tB");
	}
	else if(per>40)
	{
		printf("\tC");
	}
	else if(per>35)
	{
		printf("\tD");
	}
	
       }
   }
	
