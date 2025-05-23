/**
 *
 * Program copies input to output, replaces one or more blanks
 * by a single blank.
 *
 */

#include <stdio.h>

int main()
{
    int chars, prev_char;

    while ((chars = getchar()) != EOF)
    {
        // Print current character if it's not a blank,
        // or it's a space and previous wasn't a space.
        if ( chars != ' ' || prev_char != ' ')
        {
            putchar(chars);
        }

        prev_char = chars;
    } 
}
