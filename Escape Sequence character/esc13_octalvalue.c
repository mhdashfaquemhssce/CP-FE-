/* 13. Octal Value Escape Sequence In C (\nnn)
The octal value escape sequence in C starts with a backslash 
followed by three octal digits (represented by n). 
So the syntax \nnn can translate into values 
like \101 for the character 'A', whose ASCII value is 65. 

So, this escape sequence allows you to include characters in a string 
or character literal by specifying their octal (base-8) ASCII values. 

This escape sequence is useful for including non-printable or 
special characters in strings that are not easily typed on a keyboard.

It offers a way to specify characters by their exact ASCII value, 
which can be particularly useful in low-level programming or when dealing with binary data.
In short, we use the octal value escape sequence in C to insert or 
print the character corresponding to that octal value. */

#include <stdio.h>

int main()
{
    printf("I am\072 Unstoppable");

    return 0;
}

/* links: https://www.sciencebuddies.org/science-fair-projects/references/ascii-table  */
