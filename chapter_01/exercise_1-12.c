/**
 *
 *  Program prints its input one word per line.
 *
 */

#include <stdio.h>

#define IN 1    // Inside a word.
#define OUT 0   // Outside a word.

int main()
{
    int chars, state;

    state = OUT;

    while ((chars = getchar()) != EOF)
    {
        if (chars == ' ' || chars == '\t' || chars == '\n')
        {
            if (state == IN)
            {
                putchar('\n'); // end of a word.
            }

            state = OUT;
        }
        else
        {
            putchar(chars);  // print character of word.
            state = IN;
        }
    }

    return 0;
}
