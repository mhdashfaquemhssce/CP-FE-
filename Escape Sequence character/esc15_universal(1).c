/* 15. Universal Character Name Escape Sequence In C (\uhhhh)
The Universal Character Name (UCN) escape sequence allows you to include 
Unicode characters in your strings and character literals. 
This is particularly useful for incorporating non-ASCII characters, 
such as those from other languages or special symbols, into your C programs. 

The syntax for this escape sequence is \uhhhh. It starts with a backslash (\) 
followed by a u and four hexadecimal digits (0-9, a-f, or A-F) represented by h in the syntax. 
The four hexadecimal digits represent the Unicode code point of the character.

This escape sequence is ideal for including characters from a wide range of languages and scripts, 
beyond the standard ASCII character set.

For characters with code points beyond \uFFFF, you can use the extended format \Uhhhhhhhh, 
which uses eight hexadecimal digits.  */

#include <stdio.h>

int main()
{
    printf("I am \u03A9 Unstoppable");
    //printf("I am \u06FE Unstoppable");
    
    return 0;
}

/* link
https://en.wikipedia.org/wiki/List_of_Unicode_characters
*/