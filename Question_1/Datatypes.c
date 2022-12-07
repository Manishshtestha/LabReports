#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);                                           // int
    printf("Sum of %u and %u is %u\n", num1, num2, sum);                                           // Unsigned int
    printf("Sum of %hd and %hd is %hd\n", num1, num2, sum);                                        // Short int
    printf("Sum of %ld and %ld is %ld\n", num1, num2, sum);                                        // Longint
    printf("Sum of %f and %f is %f\n", (float)num1, (float)num2, (float)sum);                      // Float
    printf("Sum of %lf and %lf is %lf\n", (double)num1, (double)num2, (double)sum);                // Double
    printf("Sum of %Lf and %Lf is %Lf\n", (long double)num1, (long double)num2, (long double)sum); // Long Double
    return 0;
} // Main