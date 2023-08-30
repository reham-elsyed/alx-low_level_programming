#include "main.h"
/**
 * is_prime_number - function that checks for prme number
 * @n: input number
 * Return: 1 if intger is prime
 */
int is_prime_number(int n)
{
return (prime_checker(n, 2));
}
/**
 * prime_checker - chek for prime number
 * @n: input value
 * @n1: input value
 * Return: int
 */
int prime_checker(int n, int n1)
{
	if ((n1 >= n) && (n >= 2))
	{
		return (1);
	}
	else if ((n % n1) == 0 || (n <= 1))
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, (n1 + 1)));
	}
}
