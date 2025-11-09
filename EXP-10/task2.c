/*
    Expt 10 - Task 2
    Module 5 : Pointers
    Aim: WAP to print the elements of an array in
        reverse order using pointers.

*/

#include<stdio.h>

int main() {
    int n;

    printf("\t\t *** Array Reverser *** \n\n");

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  // Pointer to the array

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d : ", i);
        scanf("%d", ptr + i);  // Input directly into the memory location using the pointer
        //printf("%d\n",ptr+i);
    }

    // Print the elements in reverse order using pointers
    printf("\nArray elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));  // Access elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}




/* OUTPUT

                 *** Array Reverser ***

Enter the size of the array: 5
Enter the elements of the array:
0 : 2
1 : 4
2 : 3
3 : 5
4 : 6

Array elements in reverse order:
6 5 3 4 2

*/
