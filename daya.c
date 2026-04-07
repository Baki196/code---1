#include <stdio.h>

int main() {
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.1416 * r * r;
    circumference = 2 * 3.1416 * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

