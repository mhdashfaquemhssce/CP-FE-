/*
    Expt 7 - Task 1
    Module 4 : Arrays , String Structure
    Aim: WAP to find the largest element in an array.
    NAME: SHAIKH MOHD ASHFAQUE
    BRANCH:
    DIV:
    SUBJECT: C PROGRAMMING
    ROLL-NO:
*/

#include<stdio.h>


int main(){
    int size,i,largest=0;

    printf("\t\t *** Array Largest Number Finder *** \n\n");

    printf("Enter Array Size:");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter Array Elements:\n");
    for(i = 0; i < size; i++){
        printf("%d: ",i);
        scanf("%d", &numbers[i]);

        if(numbers[i] > largest){
            largest = numbers[i];
        }
    }

    printf("\nLargest Number: %d", largest);


    return 0;
}

/* OUTPUT

                *** Array Largest Number Finder ***

Enter Array Size:5
Enter Array Elements:
0: 1
1: 5
2: 8
3: 3
4: 2

Largest Number: 8

*/
