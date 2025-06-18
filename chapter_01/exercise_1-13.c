/**
 *
 * Program print histogram of the lenghts of words in its input.
 * Histogram with the bars horizontal.
 *
 */

#include <stdio.h>

#define IN 1                    // Inside a word.
#define OUT 0                   // Outside a word.
#define MAX_LENGTH_WORD 20      // Maximum word length.

int main()
{
    int index, length, chars, state, count_char, bar;
    int lengths_words[MAX_LENGTH_WORD];

    state = OUT;
    count_char = 0;
    
    // Initialize array to 0, ensure all element start with known value. 
    for (index = 0; index < MAX_LENGTH_WORD; ++index)
    {
        lengths_words[index] = 0;
    }

    while ((chars = getchar()) != EOF)
    {
        if (chars == ' ' || chars == '\t' || chars == '\n')
        {
            if (state == IN)
            {
                state = OUT;
                // Substract 1 because word lengths start at 1,
                // Array indices start at 0.
                ++lengths_words[count_char - 1];  
                count_char = 0;
            }
        
        }
        else
        {
            state = IN;
            ++count_char;
        }
    }

    for (index = 0; index < MAX_LENGTH_WORD; ++index)
    {
        printf("%d : ", index + 1);

        for(bar = 0; bar < lengths_words[index]; ++bar)
        {
            printf("*");
        }

        printf("\n");
    }
}
