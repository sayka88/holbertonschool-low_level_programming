#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	;
	for (i--; i >= 0; i--)
	_putchar(s[i]);
_putchar('\n');

}
