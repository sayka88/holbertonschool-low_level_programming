#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with
 * a limit on the number of bytes from s2
 * @s1: First input string.
 * @s2: Second input string.
 * @n: Number of bytes of s2 to concatenate
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
