/**
 * Program counts lines, words and characters,
 * from input and print the result as output.
 *
 * Notice: word ias any sequence of characters does not contain 
 * blank, tab or newline.
 *
 * This is a bare-bones version of the UNIX program wc.
 *
 */

#include <stdio.h>

#define IN 1     // Inside a word.
#define OUT 0    // Outside a word.

int main()
{
    int chars, state, numb_line, numb_word, numb_char;

    numb_line = numb_word = numb_char = 0;
    state = OUT;

    while ((chars = getchar()) != EOF)
    {
        ++numb_char;

        if (chars == ' ' || chars == '\t' || chars == '\n')
        {
            state = OUT;
        } 
        else if (state == OUT )
        {
            state = IN;
            ++numb_word;
        }
        if (chars == '\n')
        {
            ++numb_line;
        }
    }

    printf("Characters: %d | Words: %d | Lines: %d\n", numb_char, numb_word, numb_line);
}
