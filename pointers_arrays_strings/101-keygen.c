#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * description: finds checksum value from objdump
 *
 * Return: 0
 */
int main(void)
{
	srand(time(NULL));

	char password[13];

	for (int i = 0; i < 12; i++)
	{
		password[i] = rand() % 94 + 32;
	}

	password[12] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
