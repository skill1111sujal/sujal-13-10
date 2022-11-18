#include <stdio.h>
int reverse(int num) 
{
  int x = 0, remainder;
  
  while (num != 0) 
  {
    remainder = num % 10;
    x = x * 10 + remainder;
    num  = num/10;
  }
return x;
}
int main()
{

     int num,y;
     printf("Enetr Number :");
     scanf("%d",&num);
     y = reverse(num);
     printf("reverse number is %d",y);

}
