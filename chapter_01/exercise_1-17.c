/*
 *
 * Program prints all input lines are longuer than 80 characters.
 *
 * */

#include <stdio.h>

#define MAXLINE 1000  // Maximum line.

// Function prototype.
int get_line(char line[], int maxline);

int main()
{
    int line_length;
    char line[MAXLINE];

    while ((line_length = get_line(line, MAXLINE)) > 0)
    {        
        if (line_length > 80)
        {
            printf("%s",line);
        }   
    }

    return 0;

}

// Function definition

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

    line[index] = '\0';

    return count_chars;
}
