/*
    Expt 8 - Task 1
    Module 2 : Strings
    Aim: WAP to find the length of a string without
        using library function.
         NAME: SHAIKH MOHD ASHFAQUE
        BRANCH:
        DIV:
        SUBJECT: C PROGRAMMING
        ROLL-NO:

*/

#include<stdio.h>


int main(){
    char str[100];
    int length = 0;

    printf("\t\t *** String Length Finder *** \n\n");

    printf("Enter Your String:");
    gets(str);

    while(str[length] != '\0'){
        length++;
    }

    printf("String Length: %d Charachters", length);

    return 0;
}

/* OUTPUT

                 *** String Length Finder ***

Enter Your String:hello world
String Length: 11 Charachters

*/
