#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define READ_BUF_SIZE 1024

/**
 *main - function to copy file int a nother one
 *@ac: number of input
 *@argv: input string
 *Return: 0 if success
 */
int main(int ac, char *argv[])
{
	const char *file_from, *file_to;
	int fp1, fp2;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
file_from = argv[1];
file_to = argv[2];

fp1 = open(file_from, O_RDONLY);
if (fp1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
fp2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
 if (fp2 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
	exit(99);
}
while ((bytes = read(fp1, buf, sizeof(buf))) > 0)
{
if (write(fp2, buf, bytes) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
exit(99);
}
}
if (bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
if (close(fp1) == -1 || close(fp2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd");
exit(100);
}
return (0);
}
