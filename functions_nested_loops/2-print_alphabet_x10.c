#include "main.h"

/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
int letter, counter = 0;

while (counter < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
counter++;
_putchar('\n');
}
}
