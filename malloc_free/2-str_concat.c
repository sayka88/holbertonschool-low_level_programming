#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *s;

	s = malloc(len1 + len2 + 1);
	if (s == NULL)
		return (NULL);

	memcpy(s, s1, len1);
	memcpy(s + len1, s2, len2 + 1);

	return (s);
}
