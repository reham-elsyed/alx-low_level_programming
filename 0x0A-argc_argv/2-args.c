#include <stdio>

/**
 * main - function print num of arguments
 * @argc: int
 * @argv: list
 * Return: 0 success
 */
int main(int argc, char const *argv[])
{
	int num = 0;

	while (argc--)
	{
		printf("%s\n", argv[num]);
		num++;
	}
	return (0);
}
