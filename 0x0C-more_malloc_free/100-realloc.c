#include "main.h"
#include <stdlib.h>

/**
 * *_realloc -function to reallocate mem
 * @ptr: pointer
 * @old_size: input size
 * @new_size: input newsize
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *np;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
np = malloc(new_size);
if (p == NULL)
return (NULL);
return (np);
}
if (new_size > old_size)
{
np = malloc(new_size);
if (np == NULL)
for (i = 0; i < old_size && i < new_size; i++)
*((char *)np + i) = *((char *)ptr + i);
free(np);
}
return (np);
}


