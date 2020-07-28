#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text: ");
    int letters = 0, spaces = 0, sentences = 0;

    // Calculate the number of letters in the string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]) != 0)
        {
            letters++;
        }
    }

    // Calculate the number of spaces (number of words will be spaces + 1)
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isspace(s[i]) != 0)
        {
            spaces++;
        }
    }

    // Calculate the number of sentences (by counting '.', '?' and '!' characters)
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            sentences++;
        }
    }

    float L = (100 * letters / (float) (spaces + 1));
    float S = (100 * sentences / (float) (spaces + 1));

    float index_fl = (0.0588 * L) - (0.296 * S) - 15.8;
    int index = round(index_fl);

    if (index > 15)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}