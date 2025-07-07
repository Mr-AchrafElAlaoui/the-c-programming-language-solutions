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
        if (line_length > 80)
        {
            printf("%s",line);
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
    int count_chars;

    index = 0;
    count_chars = 0;

    while ((chars = getchar()) != EOF && chars != '\n')
    {
        if(index < maxline - 1)
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
    // To mark the end.
    line[index] = '\0';

    return count_chars;
}
