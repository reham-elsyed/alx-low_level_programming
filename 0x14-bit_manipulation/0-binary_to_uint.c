#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function to convert binary numbers to unsigned int
 * @b: pointer input to string of binary chars
 * Return: 0 if input is not 0 or 1 else return converted-num
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int total = 0;
	unsigned int decval = 1;
	int i;

	if (!b)
		return (0);
	len = _strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += decval;
		decval *= 2;
	}
	return (total);
}

/**
 * _strlen - function that return the length of a string
 * @s: input value
 * Return: length success
 */
int _strlen(const char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}
