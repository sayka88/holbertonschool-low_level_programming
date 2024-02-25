#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which to print the times table
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

int i, j, result;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;

if (result < 10)
_putchar(' ');
else if (result < 100)
_putchar(' ');

if (result < 100)
_putchar(' ');

_putchar((result / 100) % 10 + '0');
_putchar((result / 10) % 10 + '0');
_putchar(result % 10 + '0');

if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
