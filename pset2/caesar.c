#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // If no command-line argument or more than one argument is used...
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check for non-numeric input
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the string input via command line into an int
    int key_int;
    key_int = atoi(argv[1]);

    // Get input from the user
    string plaintext = get_string("plaintext: ");

    // Create an array 'ciphertext' of the same length as the user's input plaintext
    char ciphertext[strlen(plaintext)];

    printf("ciphertext: ");

    // Loop over each plaintext character, if it is in the range A-Z or a-z, then add the key to those characters to give the ciphertext equivalent.
    // If not, then print the plaintext character (to preserve punctuation, etc).
    for (int j = 0, m = strlen(plaintext); j < m; j++)
    {
        if (plaintext[j] > 64 && plaintext[j] < 91)
        {
            ciphertext[j] = (((plaintext[j] - 64) + key_int) % 26) + 64;
            printf("%c", ciphertext[j]);
        }
        else if (plaintext[j] > 96 && plaintext[j] < 123)
        {
            ciphertext[j] = (((plaintext[j] - 96) + key_int) % 26) + 96;
            printf("%c", ciphertext[j]);
        }
        else
        {
            printf("%c", plaintext[j]);
        }

    }

    printf("\n");
    return 0;

}