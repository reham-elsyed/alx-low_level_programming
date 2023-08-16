#include "main.h"

/**
 * print_times_table - function to print time table with certain input
 * @n: input to the function
 */
void print_times_table(int n)
{
int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;

if (j == 0)
{
_putchar('0' + result);
}
if (result < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + result / 10);
}
else if (result >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
}
_putchar('\n');
}
}


