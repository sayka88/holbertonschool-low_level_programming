#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string
 * or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t i, j;

	char *concatenated = malloc(len1 + len2 + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
