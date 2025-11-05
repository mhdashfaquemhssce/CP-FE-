/*
    Expt 8 - Task 2
    Module 2 : Strings
    Aim: WAP to check if the entered string is palindrome or not.
    NAME: SHAIKH MOHD ASHFAQUE
    BRANCH:
    DIV:
    SUBJECT: C PROGRAMMING
    ROLL-NO:

*/

#include<stdio.h>
#include<string.h>


int main(){
    char str[100];
    int i;

    printf("\t\t *** Palindrome Finder *** \n\n");

    printf("Enter Your String:");
    gets(str);

    // 012345678
    // malayalam
    for(i = 0; i < strlen(str) - 1; i++){
        if(str[i] != str[strlen(str) - 1 - i]){
            printf("The String is NOT a Palindrome");
            return 0;
        }
    }

    printf("The String is a Palindrome");

    return 0;
}

/* OUTPUT

                 *** Palindrome Finder ***

Enter Your String:malayalam
The String is a Palindrome

*/
