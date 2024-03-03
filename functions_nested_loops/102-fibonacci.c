#include <stdio.h>

/**
 * main - печатает первые 50 чисел Фибоначчи
 *
 * Return: всегда 0
 */
int main(void)
{
	unsigned long int prev = 0, curr = 1, next;
	int count = 0;

	while (count < 50)
	{
		printf("%lu", curr);
		if (count < 49)
			printf(", ");
		next = prev + curr;
		prev = curr;
		curr = next;
		count++;
	}
	printf("\n");

	return (0);
}

