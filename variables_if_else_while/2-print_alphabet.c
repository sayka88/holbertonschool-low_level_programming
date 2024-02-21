#include <stdio.h>

int main(void)
{
    char c = 'a';  // Start with the letter 'a'

    // Traverse the alphabet and print each letter
    while (c <= 'z')
    {
        putchar(c);  // Print the current letter
        c++;         // Move to the next letter in the alphabet
    }

    putchar('\n');  // Print a new line after printing the alphabet

    return 0;
}
