/*
 *
 * Program prints all input lines are longuer than 80 characters.
 *
 * */

#include <stdio.h>

#define MAXLINE 1000    // Maximum input line size.
#define LIMIT 80        // Lines longer than LIMIT will be printed.     

// Function prototype.
int get_line(char line[], int maxline);

int main()
{
    int line_length;    // Current line length.
    char line[MAXLINE]; // Current input line.

    while ((line_length = get_line(line, MAXLINE)) > 0)
    {   
        // line overflow the buffer, count its size. 
        if (line_length == MAXLINE - 1 && line[MAXLINE - 2] != '\n')
        {
            while (getchar() != '\n')
                ++line_length;
            // Include the newline character.
            ++line_length;
        }

        if (line_length > LIMIT)
        {
            if (line_length > MAXLINE - 1)
            {
                printf("Line (%d chars):\n%s...\n", line_length, line);
            }
            else 
            {
                printf("Line (%d chars):\n%s",line_length, line);
            }
        }   
    }

    return 0;

}

// Function definition.

// get_line(): read a line, return length. 
int get_line(char line[],int maxline)
{
    int index;
    int chars;

    for (index = 0; index < maxline -1 && (chars = getchar()) != EOF && chars != '\n'; ++index)
    {
        line[index] = chars;

    }

    if (chars == '\n')
    {
        line[index] = '\n';
        
        ++index;
    }
    // To mark the end.
    line[index] = '\0';

    return index;
}
