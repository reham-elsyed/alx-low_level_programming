#include "main.h"

/**
 * _pow_recursion - function to return the value ofx
 * @x: value input
 * @y: value of pwer
 * Return: xto the pwer of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * (_pow_recursion(x, (y - 1))));
}
}
