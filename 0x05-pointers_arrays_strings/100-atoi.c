#include "main.h"

/**
 * _atoi - a function to convert string to intger
 * @s:pointer to string
 * Return: 0 if no numbers,value if exist
 */
int _atoi(char *s)
{
int i= 0;
int digit = 0;
while (s[i] != '\0')
{
if (s[i] < 48 || s[i] > 57)
{
return (0);
}
else
{
digit = digit * 10 + (s[i] - 48);
i++;
}
}
return (digit);
}
