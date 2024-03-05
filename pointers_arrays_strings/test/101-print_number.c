#include "main.h"

/**
* print_number - печатает целое число
* @n: число для печати
*/
void print_number(int n)
{
if (n < 0)
{
	_putchar('-');
	print_number(-n);
}
else if (n >= 10)
{
	print_number(n / 10);
	_putchar(n % 10 + '0');
}
else
{
	_putchar(n + '0');
}
}

