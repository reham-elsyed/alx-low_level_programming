#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: input string
 * @src: input string
 * @n: number of characters
 * Return: best
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
