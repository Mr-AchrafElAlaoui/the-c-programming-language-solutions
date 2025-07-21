/*
 *
 *  Program reverses its input line at a time.
 *
 * */

#include <stdio.h>

#define MAXLINE 1000    //  Maximum input line size.

// Functuion prototype
int get_line(char line[], int maxline);
void reverse(char s[]);

int main()
{
    int line_length;
    char line[MAXLINE];

    while ((line_length = get_line(line, MAXLINE)) > 0)
    {
        reverse(line);

        printf("%s", line);
    }

    return 0;
}

// Function definition

// get_line()
int get_line(char line[], int maxline)
{
    int index;
    int chars;

    for (index = 0; index < maxline - 1 && (chars = getchar()) != EOF && chars != '\n'; ++index)
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

// reverse(): reverves the character in s string.

void reverse(char s[])
{

    int index;
    int length;
    int n_character;
    int tmp;

    index = 0;
    length = 0;

    // Find length of s string

    while (s[length] != '\0')
    {
        ++length;
    }
    
    /*
     *  Explain how the reverse it work 
     *
     *  ab      -> swap a <-> b
     *  abc     -> swap a <-> c
     *  abcd    -> swap a <-> d, c <-> b
     *  abcde   -> swap a <-> e, b <-> d
     *  abcdef  -> swap a <-> f, b <-> e, c <-> d 
     *
     *  In general :
     *
     *  For a N-character string: swap N / 2
     *
     *  In reference with the character positions:
     *
     *  ab      -> 0 <-> 1
     *  abc     -> 0 <-> 2
     *  abcd    -> 0 <-> 3, 1 <-> 2
     *  abcde   -> 0 <-> 4, 1 <-> 3
     *  abcdef  -> 0 <-> 5, 1 <-> 4, 2 <-> 3
     *
     *  In general :
     *
     *  For a N-character string: where string characters are n0, n1, n2, n3, n4, ..., n(N - 1)
     *  0, 1, 2 , 3, ..., (N - 1) represent the index of character in the string
     *
     *  n0 <-> n(N - 1)
     *
     *  Conclude:
     *
     *  n(i) <-> n(N - 1 - i)
     *  
     *
     * */

    n_character = length - 1;
    
    while (index < n_character / 2){

        tmp = s[index];
        s[index] = s[n_character - 1 - index];
        s[n_character - 1 - index] = tmp;

        ++index;
    }

}

