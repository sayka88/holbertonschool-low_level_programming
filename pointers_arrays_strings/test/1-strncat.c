	#include <stddef.h>
/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
	char *_strncat(char *dest, char *src, int n)
	{
	char *ptr_dest = dest;

	while (*ptr_dest != '\0')
	{
		ptr_dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr_dest = *src;
		ptr_dest++;
		src++;
		n--;
	}

	*ptr_dest = '\0';

	return (dest);
	}
