/*
 * Program prints the longest input line,
 * prints its length and as much as possible of the text.
 *
 *
 * */

#include <stdio.h>

#define MAXLINE 1000    // Maximum input line size.

// Function prototype.
int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int main()
{
    int line_length;    // Current line length
    int max_length;     // Maximum length.
    char line[MAXLINE]; // Current input line.
    char longest[MAXLINE];  // Longest line saved.

    max_length = 0;

    while ((line_length = get_line(line, MAXLINE)) > 0)
    {
        // Count the longest input line.
        if (line_length == MAXLINE - 1  && line[MAXLINE - 2] != '\n')
        {
            while (getchar() != '\n')
            {
                ++line_length;
            }

            // Include the newline character.
            ++line_length;
        }

        if (line_length > max_length)
        {
            max_length = line_length;
            copy(line, longest);
        }
    }

    if (max_length <= MAXLINE )
    {   
        printf("Longest line (%d chars):\n%s\n", max_length, longest);
    }
    else if(max_length > MAXLINE)
    {
        printf("Longest line (%d chars):\n%s...\n", max_length, longest);
    }
    else
    {
        printf("No Line Entered\n");
    }

    return 0;
}

// Function definition.
// get_line(): read a line, return length.
int get_line(char line[], int maxline)
{
    int index;
    int chars;

    for (index = 0; index < maxline - 1 && (chars = getchar()) != EOF  && chars != '\n'; ++index)
    {
        line[index] = chars;
    }

    if (chars == '\n')
    {
        line[index] = chars;

        ++index;
    }
    
    line[index] = '\0';

    return index;
}

// copy(): copy from into to
void copy(char from[], char to[])
{
    int index;

    index = 0;

    while ((to[index] = from[index]) != '\0')
    {
        ++index;
    }
}
