#include <stdio.h>

int main()
{
    int a[5], b[5], sum[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number for array (A):", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number for array (B):", i + 1);
        scanf("%d", &b[i]);
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d,",sum[i]);
    }

} // Main