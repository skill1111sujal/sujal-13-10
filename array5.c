#include<stdio.h>
int main()
{
	int maths[5],eng[5],guj[5];
	int i,sum;
	float per;
	for(i=0;i<4;i++)
	{
	printf("maths[%d]:",i);
	scanf("%d",&maths[i]);
	}
printf("\n");
	for(i=0;i<4;i++)
	{
	printf("eng[%d]:",i);
	scanf("%d",&eng[i]);
	}
printf("\n");
	for(i=0;i<4;i++)
	{
	printf("guj[%d]:",i);
	scanf("%d",&guj[i]);
	}

printf("maths \t eng \t guj \ttotal \tper \tgrade");
for(i=0;i<4;i++)
{
	printf("\n %d",maths[i]);
	printf("\t %d",eng[i]);
	printf("\t %d",guj[i]);

sum=maths[i]+eng[i]+guj[i];
printf("\t %d",sum);

per=(maths[i]+eng[i]+guj[i])/3;
printf("\t %0.2f",per);

if(maths[i]<35 || eng[i]<35 || guj[i]<35 || per<35)
{
	printf("\t fail");
}
else if(per>90)
{
	printf("\t A");
}
else if(per>85)
{
	printf("\t B");
}
else if(per>65)
{`
	printf("\t c");
}
else if(per>35)
{
	printf("\t D");
}
}

}

	