#include "main.h"

/**
 * print_last_digit -print last digit
 *@n: take input value
 * Return: 0 success
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
int i = n % 10;
if (i < 0)
{
a = -a;
_putchar('0' + i);
return (i);
}
