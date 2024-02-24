#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which to print the times table
 */
void print_times_table(int n)
{
int i, j, result;
if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;

if (result < 10)
printf("  ");
else if (result < 100)
printf(" ");

printf("%d", result);

if (j < 9)
printf(", ");
}
printf("\n");
}
}
