#include <stdio.h>

float areaTriangle (float base, float height) {

return 0.5*base*height;

}

int main() {

float base, height, area;

printf("Aim: Program to calculate area of a Triangle using function.\n\n");
printf("Full Name\t: Mohammad Faraz\n");
printf("Roll no.\t: 251749\n");
printf("Division\t: A\n");
printf("Batch\t\t: A3\n");
printf("Branch\t\t: AIML\n");
printf("Subject\t\t: C Programming\n\n");


printf("Enter base: ");
scanf("%f", &base);
printf("Enter height: ");
scanf("%f", &height);

area=areaTriangle (base, height);

printf("Area of Triangle = %.2f\n", area);

return 0;

}