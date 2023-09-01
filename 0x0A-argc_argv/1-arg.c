#include <stdio.h>

/**
 * main-print function to print number of arg.
 * @argc: num of cmd line
 * @argv: input array
 * Return: 0sucess
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
