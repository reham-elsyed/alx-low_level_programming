#include "main.h"
/**
 * *_memcpy -function that copy memory
 * @dest: input of dest
 *@src: input source memory
 *@n: input number
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
