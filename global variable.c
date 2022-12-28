#include<stdio.h>
int m,s,e,total;
float per;
void print()
{
    printf("Maths\tScience\tEnglish\tTotal\tper");
    printf("\n%d\t%d\t%d\t%d\t%2f",m,s,e,total,per);
}
void calculation()
{
    total=m+s+e;
    per=total /3;

    print();

}
void setdata()
{
    printf("Enter Maths Mark:");
    scanf("%d",&m);
    printf("Enter Science Mark:");
    scanf("%d",&s);
    printf("Enter English Mark:");
    scanf("%d",&e);

    calculation();

}
int main()
{
    setdata();
}