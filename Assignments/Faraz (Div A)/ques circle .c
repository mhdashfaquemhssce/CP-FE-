#include <stdio.h>

float areaCircle(float radius)
{
float pi = 3.14159;
return pi * radius * radius;
}

int main() {
float radius, area;

printf("Aim: Program to calculate area of a Circle using function.\n\n");
printf("Full Name\t: Mohammad Faraz\n");
printf("Roll no.\t: 251749\n");
printf("Division\t: A\n");
printf("Batch\t\t: A3\n");
printf("Branch\t\t: AIML\n");
printf("Subject\t\t: C Programming\n\n");

printf("Enter radius: ");
scanf("%f", &radius);

area=areaCircle(radius);

printf("Area of Circle = %.2f\n", area);

return 0;
}