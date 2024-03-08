#include <stdio.h>

/**
 * main - Print name of program
 *
 * @argc: size of argv array and number of command line arguments
 *
 * @argv: An array of size argc
 *
 * Return: 0
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc >= 1) {
		printf("%s\n", argv[0]);
	}

	return 0;
}
