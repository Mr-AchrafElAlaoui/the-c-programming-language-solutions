/*
 *  Program print histogram of the frequencies of different characters,
 *  in its input.
 *
 *  Histogram with bars hotizontal.
 *
 *
 * */

#include <stdio.h>

#define PRINTABLE_CHARS 95  // Number of printable chars on ascii table.

int main()
{
    int index, chars, bar;
    int number_chars[PRINTABLE_CHARS];

    // Initialize array elements to 0.
    for(index = 0; index < PRINTABLE_CHARS; ++index)
    {
        number_chars[index] = 0;
    }

    while ((chars = getchar()) != EOF)
    {
        // Substract 32, delete no printable characters, 
        // based on ascii table. 
        ++number_chars[chars - 32];
    }

    // Print histograme 
    for(index = 0; index < PRINTABLE_CHARS; ++index)
    {
        // Add 32, the first printable char based on ascii table.
        printf("'%c' : ", index + 32);

        for(bar = 0; bar < number_chars[index]; ++bar)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
