#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the resulting string `str`.
 */

char *cap_string(char *str)
{
int i = 0;
int j;
char separators[] = " \t\n,;.!?\"({})";

while (str[i] != '\0')
{
	j = 0;
	while (separators[j] != '\0' && separators[j] != str[i])
	{
		j++;
	}
	if (separators[j] == '\0' && str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	i++;
}
return (str);
}
