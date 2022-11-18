#include<stdio.h>
void main()
{
int a1[10],a2[10],a3[10];
int i, n1,n2,m,sum=0;

printf("Enter number of element in first array\n");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
	scanf("%d",&a1[i]);
}
printf("Enter the number of element in secound array\n");
scanf("%d",&n2);

for(i=0;i<n2;i++)
{
scanf("%d",&a2[i]);
}
for(i=0;i<n1;i++)
{
a3[sum]=a1[i];
sum++;
}
for(i=0;i<n2;i++)
{
a3[sum]=a2[i];
sum++;
}
printf("The merge array is\n");
for(i=0;i<(n1+n2);i++)
{
printf("%d\n",a3[i]);
}

}

