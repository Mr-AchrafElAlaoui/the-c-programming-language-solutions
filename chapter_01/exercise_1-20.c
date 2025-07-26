/*
 *
 * Program replaces tabs int the input with proper number of blanks 
 * to space to the next tab stop.
 *
 * */

#include <stdio.h>

#define TABSIZE 4       // Number os spaces per tab stop

int main()
{
    int chars;
    int column;
    int index;
    int spaces;

    // Track the current column position
    column = 0;

    while ((chars = getchar()) != EOF)
    {
        if (chars != '\t')
        {   
            putchar(chars);

            // Reset column if newline, else increment
            if (chars == '\n')
            {
                column = 0;
            }
            else
            {
                ++column;
            }

        }
        else
        {
            // Computing the remainder
            // Spaces to insert to reach the next tab stop

            while ( TABSIZE <= column)
            {
                column = column - TABSIZE;
            }

            spaces = TABSIZE - column;

            for (index = 0; index < spaces; ++index)
            {
                putchar(' ');
            }
            
            // Advance the cursor by the number of spaces
            column += spaces;
        }
    }

    return 0;
}
