#include <stdio.h>
#include <stdlib.h>

/**
* main - function
* @argc: input number
* @argv: input array
* Return: 0success
*/
int main(int argc, char *argv[])
{
int result = 0;
char *arr;

while (--argc)
{
for (arr = (argv[argc]); *arr; arr++)
{
if (*arr < '0' || *arr > '9')
{
return (printf("Error\n"), 1);
}
result += atoi(argv[argc]);
}
}
printf("%d\n", result);
return (0);
}
