/*
 *
 * Program removes trailing blanks and tabs from each line of input,
 * and delete entirely blank lines.
 *
 * */

#include <stdio.h>

#define MAXLINE 1000    // Maximum input line.

// Function prototype.
int get_line(char line[], int maxline);

int main()
{
    int line_length;    // Current line length.
    char line[MAXLINE]; // Current input line.

    while ((line_length = get_line(line, MAXLINE)) > 0)
    {
        int trim_length = line_length;

        if (line[line_length - 1] == '\n')
        {
            // Exclude '\n' charachter and '\0' null terminator of line length.
            trim_length = line_length - 2;
        } 
        else 
        {
            // Subside 1 character of line length, '\0'
            trim_length = line_length - 1; 
        }

        // Strip trailing whitespace (spaces ot tabs)
        while (trim_length >= 0 && (line[trim_length] == ' ' || line[trim_length] == '\t'))
        {
            --trim_length;
        }

        ++trim_length;
        // Re-add '\n' character at the end.
        line[trim_length] = '\n';

        ++trim_length;
        // Terminate line
        line[trim_length] = '\0';           
       
        // Only print non-empty line
        if (trim_length > 1)
        {
            printf("%s", line);
        }
    }


    return 0;
}

// Function definition.

// get_line(): read line, return length.
int get_line(char line[], int  maxline)
{
    int index;
    int chars;

    for (index = 0; index < maxline-1 && (chars = getchar()) != EOF && chars != '\n'; ++index)
    {
        line[index] = chars;
    }

    if (chars == '\n')
    {
        line[index] = chars;

        ++index;
    }
    // To mark the end.
    line[index] = '\0';

    return index;
}
