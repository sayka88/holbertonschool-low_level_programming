#include <stdio.h>
/**
 * main - A program that prints the number of arguments you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
