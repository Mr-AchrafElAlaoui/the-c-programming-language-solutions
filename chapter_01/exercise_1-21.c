/*
 *
 * Program replaces strings of blanks by th minimum number of tabs
 * and blanks to achieve the same spacing.
 *
 * */

#include <stdio.h>

#define TABSIZE 8   // 

int main()
{

    int chars;
    int column;
    int space_count;
    int to_tabstop;

    space_count = 0;
    column = 0;

    while ((chars = getchar()) != EOF)
    {
        if (chars == ' ')
        {
            ++space_count;
        }
        else
        {
            if (space_count > 0)
            {
                while (space_count > 0)
                {   
                    int tmp_column = column;

                    while (tmp_column >= TABSIZE)
                    {
                        tmp_column -= TABSIZE;
                    }

                    to_tabstop = TABSIZE - tmp_column;

                    if (space_count >= to_tabstop)
                    {
                        putchar('\t');
                        space_count -= to_tabstop;
                        column += to_tabstop;
                    }

                    else
                    {
                        putchar('+');
                        --space_count;
                        ++column;
                    }
                }
            }

            if (chars == '\n')
            {
                putchar(chars);
                column = 0;
            }
            else
            {
                putchar(chars);
                ++column;
            }    
        } 
    }

    return 0;
}
