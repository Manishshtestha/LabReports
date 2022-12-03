#include <stdio.h>

int main()
{
    float radius, area, circumference, PI; // Declaring Variables
    printf("\nEnter Radius of the Circle (r): ");
    scanf("%f", &radius);
    PI = 3.14159;                    // Defining the value of PI
    area = PI * radius * radius;     // Area Calculation
    circumference = 2 * PI * radius; // Perimeter Calculation
    printf("The area and circumference of the circle of radius %.2f is %.2f and %.2f respectively", radius, area, circumference);
    return 0;
} // main