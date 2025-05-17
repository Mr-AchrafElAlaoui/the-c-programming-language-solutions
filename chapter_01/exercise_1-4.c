/**
 *
 * The program print the corresponding Celsius to Fahrenheit table.
 *
 */

#include <stdio.h> // Standard I/O library for printf.

int main() // The main function - the entry point of the program.
{
    // The declartion of the variables
    float fahr, celsius;
    int lower, upper, step;

    // The assignment statement.
    lower = 0;   // Lower limit of temperature table.
    upper = 300; // Upper limit.
    step = 20;   // Step size.

    celsius = lower;

    printf("Celsius\tFahrenheit\n"); // Print a heading above the table.
    while (celsius <= upper) // The while loop, the condition in parenthese.
    {
        // The body of the loop is executed if the condition is True.
        fahr = celsius * (9.0/5.0) + 32.0; // Compute and assigned.
        printf("%5.0f\t%7.1f\n", celsius, fahr); // Formatting output.
        celsius = celsius + step; // Add the step and assigned
    }


}

