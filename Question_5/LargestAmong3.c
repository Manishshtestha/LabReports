#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("Enter thrid number:");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The number %d is largest among %d,%d,%d", num1, num1, num2, num3);
        }
        else{
            printf("The number %d is largest",num3)
        }
    }
    else if (num2 > num3)
    {
        if (num3 >= num1)
        {
            printf("The number %d is largest among %d,%d,%d", num2, num2, num3, num1);
        }
    }
    else if (num3 > num2)
    {
        if (num2 > num1)
        {
            printf("The number %d is largest among %d,%d,%d", num3, num3, num2, num1);
        }
    }
    else{
        printf("The numbers are equal");
    }
    return 0;
} // main
