/*
 * Program print Fahrenheit - Celsius table.
 * Demonstrates function abstraction in temperature conversion.
 *
 * */

#include <stdio.h>

#define LOWER 0     // Lower limit of temperature table.
#define UPPER 300   // Upper limit.
#define STEP 20     // Step size.

// Function prototype.
float conversion_celsius(float fahr);

int main()
{
    float fahr;

    fahr = LOWER;
    printf("Fahrenheit | Celsius\n");

    while (fahr <= UPPER)
    {
        printf("%5.0f \t %10.1f\n", fahr, conversion_celsius(fahr));
        fahr = fahr + STEP;
    }
    
    return 0;
}

// Function definition.
float conversion_celsius(float fahr)
{
    float celsius;

    celsius = (5.0/9.0) * (fahr-32.0);

    return celsius;
}
