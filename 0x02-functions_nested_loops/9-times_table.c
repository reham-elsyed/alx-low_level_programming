#include "main.h"

/**
 * times_table -prints result of times table
 *
 */
void times_table(void)
{
int i, j;
i = 0;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
int result = i *j;
if (j == 0)
{
_putchar(result + '0');
}
if (result < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result >= 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
j++;
}
_putchar('\n');
i++;
}
}
