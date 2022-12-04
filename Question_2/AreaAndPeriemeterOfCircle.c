#include <stdio.h>

int main()
{
    float radius, area, circumference, PI;
    printf("\nEnter Radius of the Circle (r): ");
    scanf("%f", &radius);
    PI = 3.14159;\
    area = PI * radius * radius;\
    circumference = 2 * PI * radius;\
    printf("The area and circumference of the circle of radius %.2f is %.2f and %.2f respectively", radius, area, circumference);
    return 0;
} // main