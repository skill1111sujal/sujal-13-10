#include<stdio.h>
void main()

{
    int a,b,ch;
    printf("Enter A=");
    scanf("%d",&a);
    printf("Enter B");
    scanf("%d",&b);

    printf("\n1. ADDITION");
    printf("\n2. SUBSTRACTION");
    printf("\n3. MULATIPLICATION");
    printf("\n4. DIVISION");
    printf("\n ENTER CHOICE");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("\n addition of a and b =%d",a+b);
            break;
        case 2:
            printf("\n substraction of a and b =%d",a-b);
            break;
        case 3:
            printf("\n multiplication of a and b =%d",a*b);
            break;
        case 4:
            printf("\n division of a and b =%d",a/b);
            break;
            default:
            printf("\n wrong choice...");
    }
}
            
    


