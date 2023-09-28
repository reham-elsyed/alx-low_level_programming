#include "main.h"
/**
 * binary_to_uint - function to turn binary to int
 * @b: input num
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int total = 0;
int i = 0;

if (!b)
return (0);
while (b[i] != '\0')
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
total = 2 * total + (b[i] - '0');
i++;
}
return (total);
}
