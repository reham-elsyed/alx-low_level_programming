#include "main.h"

/**
* print_line - function to print a line
* @n: input number
*/

void print_line(int n)
{
int i;

for (i = 0; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
_putchar('\n);
}
