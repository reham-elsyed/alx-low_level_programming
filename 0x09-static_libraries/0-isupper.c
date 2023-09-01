#include "main.h"

/**
 *_isupper -checks if the letter input is uppercase
 *@c: input variable
 *Return: 0success
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
