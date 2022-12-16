#include <stdio.h>
#define PI 3.1415926//Constant
int main()
{
    float radius, area, circumference;
    printf("\nEnter Radius of the Circle (r): ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("The area and circumference of the circle of radius %f is %f and %f respectively", radius, area, circumference);
    return 0;
} // main
