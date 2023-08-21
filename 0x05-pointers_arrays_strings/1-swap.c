#include "main.h"

/**
 * swap_int - function that swaps values of two vars
 *@a: value of first int
 *@b: value of second int
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
