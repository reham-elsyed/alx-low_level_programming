#include "main.h"

/**
 * _strlen - function returns length of string
 * @c: string input
 * Return: intger
 */
int _strlen(char *c)
{
int i = 0;

if (!c)
return (0);
while (*c++)
i++;
return (i);
}

/**
 * append_text_to_file - function to append text to file
 * @filename: input filename
 * @text_content: input content
 * Return: 1 in success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	ssize_t ln = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY, O_APPEND);
	if (fd == -1)
		return (-1);
	if (ln)
		bytes = write(fd, text_content, ln);
	close(fd);
	return (bytes == ln ? 1 : -1);
}
