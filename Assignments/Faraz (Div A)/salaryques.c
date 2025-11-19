#include <stdio.h>

int main() {
    float salary, annualSalary;
    char name[10];

    printf("Aim: WAP to calculate salary of an employee\n\n\n");
    printf("Full Name\t: Mohammad Faraz\n");
    printf("Roll no.\t: 251749\n");
    printf("Division\t: A\n");
    printf("Batch\t\t: A3\n");
    printf("Branch\t\t: AIML\n");
    printf("Subject\t\t: C Programming\n\n");

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    annualSalary = salary * 12;

    printf("Employee Name: %s\n", name);
    printf("Your annual salary is: %.2f\n", annualSalary);

    return 0;
}






    