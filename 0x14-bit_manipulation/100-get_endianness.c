#include "main.h"
#include <endian.h>
/**
 *get_endianness- function to check for big or little endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
return (__BYTE_ORDER == __LITTLE_ENDIAN) ? 1 : 0;
}
