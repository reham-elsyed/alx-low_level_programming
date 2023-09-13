#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - fun to add two nums
 *@a:int
 *@b: int
 *Return: int
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - fun to subtract two nums
 * @a:int
 * @b: int
 * Return: int
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - fun to mult two nums
 * @a:int
 * @b: int
 * Return: int
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - fun to divide two nums
 * @a:int
 * @b: int
 * Return: int
*/
int op_div(int a, int b)
{
return ((b != 0) ? (a / b) : 0);
}
/**
 * op_mod - fun to % two nums
 * @a:int
 * @b: int
 * Return: int
*/
int op_mod(int a, int b)
{
return ((b != 0) ? (a % b) : 0);
}
