/* 14. Hexadecimal Value Escape Sequence In C (\xhh)
The hexadecimal value escape sequence allows you to include characters in a string 
or character literal by specifying their hexadecimal (base-16) ASCII values. 

It starts with a backslash followed by an x and one or more hexadecimal digits 
(i.e., 0-9, a to f, and A to F) represented by h. For example, t
he sequence \x41 represents the character 'A', whose ASCII value is 65 (which is 41 in hexadecimal).

This escape sequence is useful for including characters that are not easily typed on a keyboard, 
including non-printable or special characters.

It provides a way to specify characters by their exact ASCII value in hexadecimal form, 
which can be helpful in low-level programming or when dealing with binary data. */

#include <stdio.h>

int main() 
{
    printf("We are Unstoppable\x73\x21");

    return 0;
}

/*  link:
https://www.sciencebuddies.org/science-fair-projects/references/ascii-table
*/