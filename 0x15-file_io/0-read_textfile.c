#include "main.h"

/**
 * read_textfile -function reads text file and prints it
 * @filename: input file
 * @letters: input letters
 * Return: 0 in succecsss
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int pd;
	ssize_t numbytes;
	char buff[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	pd = open(filename, O_RDONLY);
		if (pd == -1)
			return (0);
	numbytes = read(pd, &buff[0], letters);
	numbytes = write(STDOUT_FILENO, &buff[0], numbytes);
	close(pd);
	return (numbytes);
}
