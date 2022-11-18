#include<stdio.h>
int main()
{
	char str[50],s[50];
	int i,j;
	printf("enter string :");
	gets(str);

	printf("Enter string :");
	gets(s);



	printf("\nstring is : %s",str);
	printf("\nstring is : %s",s);

	
	for(i=0;str[i] !='\0';i++);
	for(j=0;str[j] !='\0';j++)
	{
		str[i]=s[j];
		i++;
	}
	str[i]='\0';
	printf("\n string is final : %s",str);
}