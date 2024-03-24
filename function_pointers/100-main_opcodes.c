	#include <stdio.h>
	#include <stdlib.h>

	/**
	* main - Prints the opcodes of its own main function
	* @argc: The number of command line arguments
	* @argv: An array of strings containing the command line arguments
	*
	* Return: 0 if successful, 1 if the number of arguments is incorrect,
	*         2 if the number of bytes is negative
	*/
	int main(int argc, char *argv[])
	{
		int num_bytes, i;

		if (argc != 2)
		{
			fprintf(stderr, "Usage: %s <number_of_bytes>\n", argv[0]);
			return (1);
		}

		num_bytes = atoi(argv[1]);

		if (num_bytes <= 0)
		{
			fprintf(stderr, "Error: Number of bytes must be a positive integer\n");
			return (2);
		}

		for (i = 0; i < num_bytes; i++)
		{
			printf("%02hhx ", *((unsigned char *)main + i));
		}
		printf("\n");

		return (0);
	}
