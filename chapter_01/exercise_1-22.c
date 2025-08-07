/*
 *
 * Program to "fold" long input lines into two or more shorter lines
 * after the last non-blank character 
 *
 * */

#include <stdio.h>

#define MAX_COLUMN 20

int main()
{
    int chars;
    int column;
    char line[MAX_COLUMN];
    int last_space_pos;


    last_space_pos = -1;
    column = 0;

    while ((chars = getchar()) != EOF)
    {
        line[column] = chars;

        if (chars == ' ')
        {
            last_space_pos = column
        }

        ++column;
    
        if (chars == '\n')
        {
            for (int index = 0; index < last_space_pos; ++index)
            {
                putchar(line[index]);
            }

            column = 0;
            last_space_pos = -1;
        
        }
        else if ( column == MAX_COLUMN ) 
        {
            if ( last_space_pos != -1)
            {
                for (int index = 0; index < last_space_pos; ++index)
                {
                    putchar(line[index]);
                }

                putchar('\n');

                int new_column = 0;
                for (int index = last_space_pos + 1; index < column; ++index)
                {
                    line[new_column];
                    ++new_column;
                }

                column = new_column;
                last_space_pos = -1;
            }
            else
            {
                for (int index = 0; index < column; ++index)
                {
                    putchar(line[index]);
                }

                putchar('\n');
                column = 0;
                last_space_pos = -1;
            }

        }
    }

    if (colunm > 0)
    {
        for (int index = 0; index < col; ++index)
        {
            putchar(line[column]);
        }

        putchar('\n');
    }

    return 0;
}
