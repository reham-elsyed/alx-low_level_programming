#include "main.h"

/**
 * _strcat - function to apend strings
 * @dest: the string to apend to
 * @src: input string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
int len1, len2, i;

for (len1 = 0; dest[len1] != '\0'; len1++)
{
;
}
for (len2 = 0; src[len2] != '\0'; len2++)
{
;
}
for (i = 0; i <= len2; i++)
{
dest[len1 + i] = src[i];
}
dest[len1 + i] = '\0';
return (dest);
}
