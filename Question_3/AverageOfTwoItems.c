#include <stdio.h>

int main()
{
    float rate1, quantity1, rate2, quantity2;
    printf("Enter the rate and quantity of item 1:");
    scanf("%f%f", &rate1,&quantity1);
    printf("Enter the rate and quantity of item 2:");
    scanf("%f%f", &rate2,&quantity2);
    printf("Average value of the first Item is Rs%.2f ", rate1 / quantity1);
    printf("Average value of the second Item is Rs%.2f", rate2 / quantity2);
    return 0;
} // Main