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
 * create_file - function to create file
 * @filename: input file name
 * @text_content: input text content
 * Return: 1 in success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	ssize_t ln = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (ln)
		bytes = write(fd, text_content, ln);
	close(fd);
	return (bytes == ln ? 1 : -1);
}
