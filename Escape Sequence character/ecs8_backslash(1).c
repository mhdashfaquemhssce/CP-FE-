/*   8. Backlash Escape Sequence In C (\\)
When we use the backslash character before another backslash or escape sequence,
then it treats the characters following the first backslash as normal content.
That is, when we use two backslashes in a string, it will insert one backslash in the output,
separating the two sections of the string (i.e., the one before and after.).    */

#include <stdio.h>

int main()
{
    printf("I am \\Unstoppable");

    return 0;
}
