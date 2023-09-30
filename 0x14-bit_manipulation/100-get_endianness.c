#include "main.h"
/**
 *get_endianness- function to check for big or little endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char *c = (char *) &num;

	if (*c)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
