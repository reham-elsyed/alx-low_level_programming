#include "main.h"

/**
 * _atoi - a function to convert string to integer
 * @s: pointer to string
 * Return: 0 if no numbers, value if exists
 */
int _atoi(char *s)
{
unsigned int digit = 0;
int sign = 1;
while (*s != '\0')
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
digit = (digit * 10) + (*s - '0');
else if (digit > 0)
break;
s++;
}
return (digit *sign);
}
