#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

char *create_buff(char *f);
void close_file(int fd);

/**
 * close_file - Closs f descriptrs.
 * @fd: The f dscriptor to be closd.
 * return: void
 */
void close_file(int fd)
{
int m;

m = close(fd);

if (m == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * create_buff - Allocates 1024 bytes for a buffer.
 * @f: The name of the f buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buff(char *f)
{
char *buff;

buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", f);
exit(99);
}
return (buff);
}

/**
 * main - Copies the contents of a f to another f.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp f_src f_dest\n");
exit(97);
}
buffer = create_buff(argv[2]);
src = open(argv[1], O_RDONLY);
r = read(src, buffer, 1024);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (src == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read src f %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(dest, buffer, r);
if (dest == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to dest %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(src, buffer, 1024);
dest = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(src);
close_file(dest);
return (0);
}
