#include "main.h"

/**
 * _sqrt_helper - Helper function to find square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess (starting from 0)
 *
 * Return: Square root if found, -1 if not found
 */
int _sqrt_helper(int n, int guess)
{
	/* If guess squared is greater than n, no natural square root */
	if (guess * guess > n)
	{
		return (-1);
	}

	/* If guess squared equals n, we found it! */
	if (guess * guess == n)
	{
		return (guess);
	}

	/* Otherwise, try the next guess */
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: Natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	/* Negative numbers have no natural square root */
	if (n < 0)
	{
		return (-1);
	}

	/* Start the search from 0 */
	return (_sqrt_helper(n, 0));
}
