#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 1 (success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}

putchar('\n');

return (0);
}
