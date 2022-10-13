#include<stdio.h>
void main()
{
	int a[5],b[5],t;
int i;

for(i=0;i<5;i++)
{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
	printf("b[%d]=",i);
	scanf("%d",&b[i]);
}
printf(" a\tb\ttotal\n============================");
for(i=0;i<5;i++)
{
	t = a[i] + b[i];
	printf("\n %d \t%d\t%d",a[i],b[i],t);
	
}
}