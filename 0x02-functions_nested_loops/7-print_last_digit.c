#include "main.h"

/**
 * print_last_digit -print last digit
 *@n: take input value
 * Return: 0 success
 */
int print_last_digit(int n)
{
int i = n % 10;
_putchar('0' + i);
_putchar('\n');
return (0);
}
