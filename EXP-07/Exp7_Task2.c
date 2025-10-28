/*
    Expt 7 - Task 2
    Module 4 : Arrays String and Structure
    Aim: WAP to calculate sum of two matrix.

    NAME: SHAIKH MOHD ASHFAQUE
    BRANCH: AIML
    DIV: A
    SUBJECT: C PROGRAMMING
    ROLL-NO: 1234

*/

#include<stdio.h>


int main(){
    int rows,cols,i,j;

    printf("\t\t *** Add Arrays *** \n\n");

    printf("Enter Array Size (row,column):");
    scanf("%d,%d", &rows, &cols);

    int arr_a[rows][cols], arr_b[rows][cols], sum[rows][cols];

    printf("Enter First Array Elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d,%d: ",i,j);
            scanf("%d", &arr_a[i][j]);
        }
    }
    printf("\n");

    printf("Enter Second Array Elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d,%d: ",i,j);
            scanf("%d", &arr_b[i][j]);
        }
    }
    printf("\n");

    printf("Sum of both Arrays:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum[i][j] = arr_a[i][j] + arr_b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* OUTPUT

                 *** Add Arrays ***

Enter Array Size (row,column):2,3
Enter First Array Elements:
0,0: 2
0,1: 3
0,2: 1
1,0: 2
1,1: 3
1,2: 4

Enter Second Array Elements:
0,0: 5
0,1: 3
0,2: 4
1,0: 5
1,1: 6
1,2: 4

Sum of both Arrays:
7 6 5
7 9 8

*/
