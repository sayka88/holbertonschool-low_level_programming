#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 98, 99 or 100 on error
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", f(a, b));

	return (0);
}
