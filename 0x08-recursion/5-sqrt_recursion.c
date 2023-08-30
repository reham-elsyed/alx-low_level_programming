#include "main.h"
/**
 * _sqrt_recursion - function return natural aquare root
 * @n: input number
 *Return: n natural square root
 */
int _sqrt_recursion(int n)
{
	return (square_helper(n, 1));
}

/**
 * square_helper - fun to calculate square root
 * @n: input value
 * @guess: input value
 * Return: int
 */
int square_helper(int n, int guess)
{
int square = guess * guess;

if (square == n)
{
return (guess);
}
else if (square < n)
{
return (square_helper(n, (guess + 1)));
}
else
{
return (-1);
}
}
