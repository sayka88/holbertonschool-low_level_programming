#include "main.h"

/**
 * print_number - печатает целое число
 * @n: число для печати
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;
	int is_negative = 0;

	if (n < 0)
	{
		num = -n;
		is_negative = 1;
	}
	else
	{
		num = n;
	}

	if (num / 10 > 0)
		print_number(num / 10);

	_putchar('0' + (num % 10));

	if (is_negative)
		_putchar('-');
}
