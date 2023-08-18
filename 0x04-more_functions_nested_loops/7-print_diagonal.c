#include "main.h"

/**
 * print_diagonal - print diagonal shape
 * @n: in input number
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
