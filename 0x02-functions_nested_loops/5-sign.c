#include "main.h"

/**
*print_sign - prints the sign of a number
*@n: the int to check
*0 and prints 0 if n is zero
*-1 and prints - if n is less than zero
*Return: 1 and prints + if n is greater than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
