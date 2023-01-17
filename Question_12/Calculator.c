#include <stdio.h>
int main()
{
    int num1,num2;
    char choice;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    printf("What would you like to do?\na.Add\nb.Subtract\nc.Multiply\nd.Divide:");
    scanf(" %c",&choice);
    switch (choice)
    {
    case 'a':
        printf("The addition of %d and %d is %d",num1,num2,num1+num2);
        break;
    case 'b':
        printf("The difference of %d and %d is %d",num1,num2,num1-num2);
        break;
    case 'c':
        printf("The product of %d and %d is %d",num1,num2,num1*num2);
        break;
    case 'd':
        printf("The division of %d by %d is %d",num1,num2,num1/num2);
        break;
    default:
        printf("Invalid Input given");
        break;
    }
    return 0;
}
