#include "main.h"
/**
 * _strlen -function to count length
 * @c: input string
 * Return: len
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
 * creat_file -function reads text file and prints it
 * @filename: input file
 * @text_content: input letters
 * Return: 0 in succecsss
 */

int creat_file(const char *filename, char *text_content)
{
        int pd;
        ssize_t numbytes = 0;
        ssize_t len = _strlen(text_content);

        if (!filename)
		return (-1);

        pd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
                if (pd == -1)
                        return (-1);
		if (len)
	numbytes = write(pd, text_content, len);
        close(pd);
        return (numbytes == len ? 1 : -1);
}
