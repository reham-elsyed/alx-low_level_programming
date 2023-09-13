#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculation
 * @argc: int arg
 * @argv: input array
 * Return: result int
*/

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
exit(98);
}

int num1 = atoi(argv[1]);
char *oprt = argv[2];
int num2 = atoi(argv[3]);
int result;

int (*func)(int, int) = get_op_func(oprt);

if (func == NULL)
{
printf("Error\n");
exit(99);
}
if ((num2 == 0) && (oprt[0] == '/') || (oprt[0] == '%'))
{
printf("Error\n");
exit(100);
}
result = func(num1, num2);
printf("%d\n", result);
return (0);
}
