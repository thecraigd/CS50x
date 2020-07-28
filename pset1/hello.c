// This program takes user input (their name), and then outputs a friendly greeting.

#include <cs50.h>
#include <stdio.h>

int main(void)sty
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}