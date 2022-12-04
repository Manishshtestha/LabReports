#include <stdio.h>

int main()
{
    float rate1, quantity1, rate2, quantity2, average;
    printf("Enter the Quantity of first item:");
    scanf("%f", &quantity1);
    printf("Enter the Rate of first item:");
    scanf("%f", &rate1);
    printf("Enter the Quantity of second item:");
    scanf("%f", &quantity2);
    printf("Enter the Rate of second item:");
    scanf("%f", &rate2);
    average = ((rate1 * quantity1) + (rate2 * quantity2)) / (rate1 + rate2);
    printf("Average of the Items %.2f is %.2f", rate1 + rate2, average);
    return 0;
} // Main