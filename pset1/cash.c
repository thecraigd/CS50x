// This program finds the smallest number of coins to make change from.

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float value;

    // Get the amount of change owed.
    do
    {
    value = get_float("Change owed (in $):");
    }
    while (value < 0);

    // Convert dollar figure to cents
    int cents = round(value * 100);

    int quarters = (cents / 25);
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = (((cents % 25) % 10) % 5);

    printf("%i\n", quarters + dimes + nickels + pennies);
}