/* 5. Carriage Return Escape Sequence In C (\r)
The carriage return character (ASCII code 13) causes the cursor to return to
the start of the current line and then continue with the action. ,
leading to overwriting the content given before the escape character. */

#include <stdio.h>

int main()
{
    printf("I am \r Unstoppable");

    //printf("I am student of rizvi college of engg. \r Unstoppable");

    return 0;
}
