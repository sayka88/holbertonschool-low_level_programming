#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * create_file - creates a file with given name and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, write_res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		write_res = write(fd, text_content, len);
		if (write_res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
