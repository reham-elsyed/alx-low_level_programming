
#include <stdio.h>
#include "main.h"

/**
 * _putchar - write haracter c to stdout
 * @c:Ther char prnt
 * Return: On succss 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

