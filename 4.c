#include <stdio.h>
#define PI 3.14159   // Define constant value of PI

int main() {
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;              // Area = πr²
    circumference = 2 * PI * radius;          // Circumference = 2πr

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
