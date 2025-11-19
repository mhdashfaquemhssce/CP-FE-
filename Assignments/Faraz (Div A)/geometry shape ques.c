#include <stdio.h>

// Rectangle 
float areaRectangle(float length, float width) {
    return length * width;
}

//  circle
float areaCircle(float radius) {
    float pi = 3.14159;
    return pi * radius * radius;
}

// triangle
float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float length, width, radius, base, height, area;

    printf("Aim: Program to calculate area of geometric shapes using functions.\n\n");
    printf("Full Name\t: Mohammad Faraz\n");
    printf("Roll no.\t: 251749\n");
    printf("Division\t: A\n");
    printf("Batch\t\t: A3\n");
    printf("Branch\t\t: AIML\n");
    printf("Subject\t\t: C Programming\n\n");

    printf("Select the shape to calculate area:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter width: ");
            scanf("%f", &width);
            area = areaRectangle(length, width);
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 2:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = areaCircle(radius);
            printf("Area of Circle = %.2f\n", area);
            break;

        case 3:
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            area = areaTriangle(base, height);
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}