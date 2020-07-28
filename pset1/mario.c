// This program makes a pair of pyramids for Maio to jump over

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int n;

    // Get input from the user, between 1 and 8.
    do
    {
        n =  get_positive_int();
    }
    while (n < 0 && n > 8);

    // Build the pyramid!
    for (int i = 0; i < n; i++)
    {

        // This puts the appropriate number of spaces in place to make our pyramid right aligned.
        for (int d = n - 1; d > i; d--)
        {
            printf(" ");
        }

        // This adds the appropriate number of '#' signs
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }

        // Puts our spaces in between the pyramids
        printf("  ");

        // Makes the second column of '#' signs
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}



// Prompt user for positive integer
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("How many levels should Mario's pyramid have?\nEnter a number between 1 and 8: ");
    }
    while (n < 1 || n > 8);
    return n;
}
