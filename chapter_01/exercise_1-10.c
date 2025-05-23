/**
 *
 * Program copies input to output, replaces tab to \t,
 * backspace to \b and backslash to \\.
 *
 */

#include <stdio.h>

int main()
{
    int chars;

    while ((chars = getchar()) != EOF)
    {
        if (chars == '\t')
        {
            putchar('\\');
            putchar('t');
        } 
        else if (chars == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (chars == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(chars);
        }
    }

    return 0;
}
