#include "main.h"

/**
 * print_binary - function to print binary
 * @n: input decimal
 * Return: always nothing
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	int i;
	char bit;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit)
		{
			_putchar('1');
			count ++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}

