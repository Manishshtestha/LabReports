#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a Number to Check if its prime number or not:");
    scanf("%d", &num);
    for (int i = 2; i <= (num / 2); ++i)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    count == 0 ? printf("%d is a prime number", num) : printf("%d is not a prime number", num);
    return 0;
} // Main