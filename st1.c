#include<stdio.h>
int main()
{
	char str[50],rev[50];
	int i,j,k;
	printf("enter string :");
	gets(str);



	printf("\n string is : %s",str);
	

	
	for(i=0;str[i] !='\0';i++);
	

	printf("\n string length :%d",i);
	k=i;
	for(j=0;j<=i;j++)
	{
		rev[j]=str[--k];
		
	}
	rev[i]='\0';
	printf("\n revers string is  : %s",rev);
}