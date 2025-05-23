/**
 *
 * program print Fahreneheit-Celsius table in reverse order,
 * Use for loop.
 *
 */

#include <stdio.h>

// Symbolic Constants, for magic number.

#define LOWER 0     // lower limit of table.
#define UPPER 300   // upper limit.
#define STEP 20     // step size.

int main()
{
    int fahr;

    printf("Fahreneheit  |  Celsius\n");
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        // Use expression of Celsius instead of variable.
        printf("%5d\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;

}
