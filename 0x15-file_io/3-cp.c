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
	int fp1, fp2;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
fp1 = open(argv[1], O_RDONLY);
if (fp1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fp2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fp2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
bytes = read(fp1, buf, sizeof(buf));
while (bytes > 0)
{
if (write(fp2, buf, bytes) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}
if (bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(fp1) == -1 || close(fp2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd");
exit(100);
}
return (0);
}
