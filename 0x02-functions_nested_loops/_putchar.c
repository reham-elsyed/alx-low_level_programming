#include "main.h"
#include <unistd.h>

/**
 * main - prints _putchar
 * @c: character it will print
 *
 * Return: 1 Success
 * On error, -1 returned, and error is set appropriatly.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
