#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: The0 character to print
 *
 * Return 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
