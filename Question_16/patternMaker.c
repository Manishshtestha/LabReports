#include <stdio.h>
int function(){
    
}
int main()
{
    // Pattern no 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // // Pattern no 2;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // // Pattern no 3;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // Pattern no 4;
    for (int i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                printf(" ");
            }
            printf("x", j);
        }
        printf("\n");
    }
} // Main