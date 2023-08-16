#include "main.h"

/**
 * print_times_table - function to print time table with certain input
 * @n: input to the fun
 */
void print_times_table(int n)
{
int i, j, res;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
res = j * i;

if (j == 0)
{
_putchar(res + '0');
}
else if (res < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res >= 10 && res < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((res / 100) + '0');
_putchar(((res / 10) % 10) + '0');
_putchar((res % 10) + '0');
}}
_putchar('\n');
}}}
