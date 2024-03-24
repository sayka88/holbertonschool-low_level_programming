#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - Returns the sum of all its parameters
* @n: The number of parameters
*
* Return: The sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	sum = 0;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
