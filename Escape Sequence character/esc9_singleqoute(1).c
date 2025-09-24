/* 9. Single Quote Escape Sequence In C (\')
The purpose of the single-quote escape sequence is made up
of a backslash followed by a single quote character.

It inserts a single quotation mark wherever it is placed, i.e.,
whether it is in the middle of the string or after, etc.
This is needed since single quotes already have a pre-defined purpose in C code,
that is, to enclose single char values.  */

#include <stdio.h>

int main()
{
    printf("I am \'Unstoppable\' ");

    return 0;
}
