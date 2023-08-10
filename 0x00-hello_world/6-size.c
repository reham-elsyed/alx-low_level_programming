#include <stdio.h>
/**
* main - A program that prints the size of various computer types
* Return: 0 (Success)
*/
int main(void)
{
char c;
int i;
long int d;
long long int a; 
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}