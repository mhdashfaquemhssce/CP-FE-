/*
    Expt 1 - Task 2
    Module 1 : Fundamentals of C Programming
    Aim: WAP to get students PCM marks from the user and
        find the average. Use conditional operator to print
        if the student is eligible for admission. Eligibility
        criteria is 50% in PCM.

    NAME: SHAIKH MOHD ASHFAQUE
    BRANCH: AIML
    DIV: A2
    SUBJECT: C PROGRAMMING
    ROLL-NO: 1234

*/

#include<stdio.h>


int main(){
    int phy,chem,math,avg;

    printf("\t\t\t *** Student Eligibility Calculator *** \n\n\n");

    printf("Enter Physics Marks: ");
    scanf("%d", &phy);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &chem);
    printf("Enter Maths Marks: ");
    scanf("%d", &math);

    avg = (phy + chem + math)/3;

    printf("PCM Average = %d\n", avg);
    avg>=50?printf("You are Eligible for Admission"):printf("You are NOT Eligible for Admission");

    return 0;
}

/* OUTPUT

Enter Physics Marks: 45
Enter Chemistry Marks: 56
Enter Maths Marks: 78
PCM Average = 59
You are Eligible for Admission

*/
