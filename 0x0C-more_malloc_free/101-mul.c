#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * isNumeric - function to check input if number
 * @str: input str
 * Return: 0 sucess
 */
int isNumeric(char* str)
{
while (*str)
{
if (!(*str <= '0' || *str >= '9'))
{
return (1);
break;
}
str++;
}
return (0);
}

/**
 *stringToIntger - function to convert str to int
 *@str: pointer to string
 *Return: result
 */
int stringToIntger( char* str)
{
int result;

result = 0;
while (*str)
{
result = result * 10 + (*str - '0');
str++;
}
return (result);
}
/**
 *multiply -function to multiplt nums
 *@num1: input num
 *@num1: input num
 *Return: multible
 */
int multiply(int num1, int num2)
{
int mult;

mult = num1 *num2;
return (mult);
}
/**
 *integerToString -function to convert int to str
 *@num: input int
 *Return: str
 */
char* integerToString(int num)
{
int temp = num;
int numDigits = 0;
int i;
char *str;

while (temp != 0)
{
temp /= 10;
numDigits++;
}
str = (char*)malloc((numDigits + 1) * sizeof(char));
if (str == NULL) {
return (NULL);
}
for (i = numDigits - 1; i >= 0; i--)
{
str[i] = '0' + num % 10;
num /= 10;
}
str[numDigits] = '\0';
return (str);
}
/**
 * main - function to multiply two numbers
 * @argc: input nym
 * @argv :inputstring of digits
 * Return: 0 sucess
 */
int main(int argc, char* argv[])
{
int i, num1, num2, result;
char* arg1;
char* arg2;
char *str;

if (argc != 3)
{
printf("Error\n");
return (98);
}
arg1 = argv[1];
arg2 = argv[2];
if (!isNumeric(arg1) || !isNumeric(arg2))
{
printf("Error\n");
return (98);
}
num1 = stringToIntger(arg1);
num2 = stringToIntger(arg2);
result = multiply(num1, num2);
str = integerToString(result);
if (str != NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
free(str);
}
return (0);
}
