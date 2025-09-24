/* 12. Null Character Escape Sequence In C (\0)
The null escape sequence is used to mark the end of a string 
(as C strings are null-terminated). 
If a null character is encountered in the middle of a string, 
it terminates the string, ignoring the remaining segment. 
Here are some key points about the null escape sequence:

String Termination: The null character is crucial for indicating where a string ends. 
Without it, functions that process strings wouldn't know where the string terminates.
Memory Management: It helps in managing memory by marking the boundary of a string, 
allowing functions to avoid reading past the allocated memory for the string.
Syntax: It is represented by \0 in code and has an ASCII value of 0.  */


#include <stdio.h>

int main() 
{
    printf("I am Unstoppable\0Continued");

    return 0;
}