#include "main.h"
/**
 * read_textfile - function to readtext file and print it to the posix
 * @filename: input file name pointer
 * @letters: number of letters
 * Return: text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	size_t byts;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	byts = read(fp, &buf[0], letters);
	byts = write(STDOUT_FILENO, &buf[0], byts);
	close(fp);
	return (byts);
}
