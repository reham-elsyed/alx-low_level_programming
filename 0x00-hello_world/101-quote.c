#include <stdio.h>
#include <string.h>
/**
 * main - print string without using printf or puts
 * Return: 1 (Success)
 */
int main(void)
{
const char *str = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
return (1);
}
