#include "main.h"

/**
 * print_last_digit -print last digit
 *@n: take input value
 * Return: i success
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
int i = n % 10;
_putchar('0' + i);
return (i);
}
