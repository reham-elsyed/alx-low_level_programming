#include "main.h"

/**
 * print_last_digit -print last digit
 *@n: take input value
 * Return: i success
 */
int print_last_digit(int n)
{
int i;
if (n < 0)
{
n = -n;
}
i = n % 10;
if (i < 0)
i = -i;
_putchar('0' + i);
return (i);
}
