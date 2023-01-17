#include <stdio.h>

int main()
{
    int num, reverse = 0, rem, org;
    printf("Enter a number:");
    scanf("%d", &num);
    org = num;
    while (num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    reverse == org ? printf("The number %d is Palindrome Number", org) : printf("The number %d is not Palindrome Number", org);
    return 0;
    /* code here */
} // Main