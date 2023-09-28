 #include "main.h"
/**
 * print_binary - function to print binary
 * @n: input int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int binary = sizeof(n) * 8;
	int printed = 0;

	while (binary)
	{
		if (n & 1L << --binary)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
