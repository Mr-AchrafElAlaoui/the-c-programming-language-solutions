/**
 *
 * Program counts newlines, blanks and tabs.
 *
 * Notice: Characters you type are buffered by terminal line-by-line.
 * Terminal Input Mode, (canonical mode).
 */

#include <stdio.h>

int main()
{
    int chars, tab, blank, line;

    tab = 0;
    blank = 0;
    line = 0;

    while ((chars = getchar()) != EOF)
    {
        if (chars == ' ')
            ++blank;
        if (chars == '\t')
            ++tab;
        if (chars == '\n')
            ++line;
    }
    printf("Blanks: %d | Tabs: %d | Lines: %d\n", blank, tab, line);

    return 0;
}
