#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    num1 = (num1 > 0) ? num1 : -num1;
    num2 = (num2 > 0) ? num2 : -num2;
    while (num1 != num2) {
        if(num1 > num2){
            num1 -= num2;
        }else{
            num2 -= num1;
        }
    }
    printf("The HCF is %d",num1);
} // Main