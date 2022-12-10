#include <stdio.h>

int main()
{
    int num, revnum = 0, rem, org;
    printf("Enter a number:");
    scanf("%d", &num);
    org = num;
    while (num > 0)
    {
        rem = num % 10;
        revnum = revnum * 10 + (num % 10);
        num /= 10;
    }
    revnum == org ? printf("The number %d is Palindrome Number", org) : printf("The number %d is not Palindrome Number", org);
    /* code here */
} // Main