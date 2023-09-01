#include "main.h"

/**
 *_islower - function that checks if lower case letter exist in input
 *@c: is the char checked
 * Return: 1 sucess else 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
