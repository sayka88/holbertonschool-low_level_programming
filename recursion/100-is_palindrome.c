#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length / 2; i++)
	{
		if (s[i] != s[length - i - 1])
		{
			return 0;
		}
	}

	return 1;
}
