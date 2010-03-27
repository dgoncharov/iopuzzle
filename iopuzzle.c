/*
 * Paragraph 7.9.3.7 of the C programming language standard ISO/IEC 9899:1999.
 * "As initially opened, the standard error stream is not fully buffered;
 * the standard input and standard output streams are fully buffered
 * if and only if the stream can be determined
 * not to refer to an interactive device."
 */

#include <stdio.h>
#include <unistd.h>

int main()
{
    int i;
    for (i = 0; i < 3; ++i)
    {
        printf("%d\n", i);
        fork();
    }
    return 0;
}


