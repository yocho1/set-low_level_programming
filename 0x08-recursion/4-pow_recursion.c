#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Return: x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* Error case: negative exponent */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: any number to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive case: x^y = x × x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
