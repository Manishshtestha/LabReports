#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("The number %d is greater than %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("The number %d is greater than %d", num2, num1);
    }
    else
    {
        printf("The numbers are equal");
    }
    return 0;
}
