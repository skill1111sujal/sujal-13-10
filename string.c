#include<stdio.h>
int main()
{
	char str[50];
	printf("enter string :");
	
	gets(str);

	printf("string is : %s",str);

	int i;
	for(i=0;str[i] !='\0';i++);
	printf("\n string length is : %d",i);
}