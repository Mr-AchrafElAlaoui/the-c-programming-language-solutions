/**
 *
 * Program verifies expression getchar() != EOF is 0 or 1.
 *
 * Notice: Press Ctrl+D (Linux/macOS) or Ctrl+z (Windows) to send EOF.
 *
 * Terminal input mode (Canonical mode),
 * C program receives input after Enter.
 */

#include <stdio.h>

int main()
{
    int c;
    
    // Parentheses around assignment within condition are necessary.
    // Absence of parentheses, test != would be done before assignment.
    while((c = (getchar() != EOF)))
        printf("%d", c);
    
    return 0;

}
