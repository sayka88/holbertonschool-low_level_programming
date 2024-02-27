#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long n = 612852475143;
long factor = 2;

while (n > 1)
{
	if (n % factor == 0)
	{
		n /= factor;
	}
	else
	{
		factor++;
	}
}

printf("%ld\n", factor);

return (0);
}
