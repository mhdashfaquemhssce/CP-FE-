/*
    Expt 2 - Task 1
    Module 2 : Control Structures
    Aim: WAP to print if entered number is even or odd.
    Name: SHAIKH MOHD ASHFAQUE
    BRANCH:
    ROLL-NO:
    DIV:

*/

#include<stdio.h>


int main(){
    int num;

    printf("\t\t\t *** Even Odd Finder *** \n\n\n");

    printf("Enter Number: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("%d is Even", num);
    }else{
        printf("%d is Odd", num);
    }

    return 0;
}

/* OUTPUT

Enter Number: 13
13 is Odd

*/
