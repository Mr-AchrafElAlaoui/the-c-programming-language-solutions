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
    int line_lenght;    // Current line length
    int max_lenght;     // Maximum length.
    char line[MAXLINE]; // Current input line.
    char longest[MAXLINE];  // Longest line saved.

    max_lenght = 0;

    while((line_length = get_line(line, MAXLINE)) > 0)
    {
        if(line_length > max_length)
        {
            max_length = line_length;
            copy(line, longest);
        }
    
    }

    if (max_length > 0)
    {   
        if(max_length > MAXLINE)
        {
            printf("Longest line (%d chars):\n%s\n", max_length, longest);
        }
        else
        {
            printf("Longest line (%d chars):\n%s\n", max_length, longest);
        }
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
    int count_chars;
    
    count_chars = 0;
    index = 0;

    while ((chars = getchar()) != EOF && chars != '\n')
    {   
        if (index < (maxline - 1))
        {
            line[index] = chars;
        }

        ++count_chars;
        ++index;
    }

    if (chars == '\n')
    {
        line[index] = '\n';

        ++count_chars;
        ++index;
    }
    
    line[index] = '\0';

    return count_chars;
}

// copy(): copy from into to
void copy(char from[], char to[])
{
    int index;

    index = 0;

    while(from[index] != '\0')
    {
        to[index] = from[index];

        ++index;
    }

    to[index] = '\0';

}
