/**
 * The program print a table of Fahrenheit temperatures 
 * and their Celsius equivalents.
 *
 */

#include <stdio.h> // Standard I/O library for printf.

int main() // The main function - the entry point of the program.
{
    // The declaration of variables (type name, variable).
    float fahr, celsius;
    int lower, upper, step;

    //The assignement statements.
    lower = 0;   // Lower limit of temperature table.
    upper = 300; // Upper limit.
    step = 20;   // Step size.

    fahr = lower;
    // The while loop repeats execute the body loop, 
    // until the condition in parentheses is False, the loop ends.
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) 
    {
        // The body loop is executed if the condition is True.

        // Note: 5/9, integer division truncated to zero. 
        celsius = (5.0/9.0) * (fahr - 32); // Compute and assigned. 
        printf("%6.0f\t%13.1f\n", fahr, celsius); // Formatting the output.
        fahr = fahr + step; // Add step size and assigned.
    
    }
}
