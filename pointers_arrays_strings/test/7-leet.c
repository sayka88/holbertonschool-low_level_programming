#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the resulting string `s`.
 */
char *leet(char *s)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet[] = "43071";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; letters[j] != '\0'; j++)
	{
		if (s[i] == letters[j])
		{
			s[i] = leet[j / 2];
			break;
		}
	}
}
return (s);
}

