#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

	if (*needle == '\0')
		return (haystack);
for (i = 0; haystack[i]; i++)
{
	for (j = 0; needle[j]; j++)
		if (haystack[i + j] != needle[j])
			break;

	if (needle[j] == '\0')
		return (haystack + i);
}
return (NULL);
}
