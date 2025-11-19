#include <stdio.h>

float areaRectangle(float length, float width) {
    return length * width;
}

int main() {
    float length, width, area;

    printf("Aim: Program to calculate area of a Rectangle using function.\n\n");
    printf("Full Name\t: Mohammad Faraz\n");
    printf("Roll no.\t: 251749\n");
    printf("Division\t: A\n");
    printf("Batch\t\t: A3\n");
    printf("Branch\t\t: AIML\n");
    printf("Subject\t\t: C Programming\n\n");

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = areaRectangle(length, width);
    printf("Area of Rectangle = %.2f\n", area);

    return 0;
}