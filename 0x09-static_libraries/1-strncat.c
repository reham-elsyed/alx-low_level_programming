#include "main.h"

/**
 * _strncat - function to concat n number of string
 * @dest: input string
 * @src: other input string
 * @n: number of char to be added
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len1, i;

for (len1 = 0; dest[len1] != '\0'; len1++)
{
;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len1 + i] = src[i];
}
dest[len1 + i] = '\0';
return (dest);
}
