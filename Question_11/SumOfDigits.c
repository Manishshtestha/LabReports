#include <stdio.h>

int main()
{
    int num, org, sum = 0;
    printf("Enter a Number:");
    scanf("%d", &num);
    org = num;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("The sum of digits of %d is %d", org, sum);
    return 0;
} // Main
