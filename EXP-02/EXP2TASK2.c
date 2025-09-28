/*
    Expt 2 - Task 2
    Module 2 : Control Structures
    Aim: WAP to find sum of all odd numbers between two
        numbers entered by user.

*/

#include<stdio.h>


int main(){
    int start_num,end_num,sum=0,i;

    printf("\t\t\t *** Sum of Odd Numbers *** \n\n\n");

    // Take User Input
    printf("Enter Start Number: ");
    scanf("%d", &start_num);
    printf("Enter Ending Number: ");
    scanf("%d", &end_num);

    // Check if starting number is higher than ending number
    if(start_num > end_num){
        printf("Error: Ending number should be higher than Starting Number");
        return 1;
    }

    // Add all odd numbers
    for (i = start_num; i <= end_num; i++){
        if(i%2 != 0){
            sum = sum + i;
        }
    }

    printf("Sum of all the Odd Numbers between %d and %d = %d", start_num, end_num, sum);

    return 0;
}

/* OUTPUT

                         *** Sum of Odd Numbers ***


Enter Start Number: 3
Enter Ending Number: 50
Sum of all the Odd Numbers between 3 and 50 = 624

*/
