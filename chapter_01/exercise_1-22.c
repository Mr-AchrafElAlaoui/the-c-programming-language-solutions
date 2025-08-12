/*
 *
 * Program to "fold" long input lines into two or more shorter lines
 * after the last non-blank character 
 *
 * */

#include <stdio.h>

#define MAX_COLUMN 20   // Maximun column width for a line.

int main()
{
    int chars;              // The current character.
    int column;             // The current column position, output.
    char line[MAX_COLUMN];  // A buffer to hold the current line being built.
    int last_space_pos;     // The column position of the last blank.


    last_space_pos = -1;
    column = 0;

    // Loop through every character from the input until we reach End-Of-Line.
    while ((chars = getchar()) != EOF)
    {
        line[column] = chars;

        // If the character is a blank, we record its position.
        if (chars == ' ' || chars == '\t')
        {
            last_space_pos = column
        }
        
        // Increment the column.
        ++column;

        // --- Case 1: Explicit newline ---
        // We print whatever we have buffered and reset for the next line.
        if (chars == '\n')
        {
            for (int index = 0; index < column; ++index)
            {
                putchar(line[index]);
            }

            column = 0;
            last_space_pos = -1;
        
        }
        // --- Case 2: We have reached the maximun column limit ---
        // This is where the main "folding" logic happens.
        else if ( column == MAX_COLUMN ) 
        {
            // If we found a blank space, and not in the index 0
            // to not get an empty line.
            if ( last_space_pos > 0)
            {
                // Print the line up to (but not including) the last blank 
                for (int index = 0; index < last_space_pos; ++index)
                {
                    putchar(line[index]);
                }

                // Fold the line here.
                putchar('\n');

                // Now, we shift the part of the line after the last blank
                // to the beginning of our buffer for the next line.
                int new_column = 0;
                for (int index = last_space_pos + 1; index < column; ++index)
                {
                    line[new_column];
                    ++new_column;
                }

                // Update column, and reset since we're on a new folder line.
                column = new_column;
                last_space_pos = -1;
            }
            // --- Case 3: We have a very long word with no blanks ---
            else
            {
                // Break the word.
                // Print the entire buffer.
                for (int index = 0; index < column; ++index)
                {
                    putchar(line[index]);
                }

                // Fold the line here.
                putchar('\n');

                // Reset state completely for the new line.
                column = 0;
                last_space_pos = -1;
            }

        }
    }
    
    // --- Case 4: After the loop (EOF is reached) ---
    // Characters left in the buffer that haven't been printed yet.
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
