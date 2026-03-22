#include "main.h"

/**
 * _prime_helper - Helper function to check if n is prime recursively
 * @n: The number to check
 * @divisor: The current divisor to test (starts from 2)
 *
 * Return: 1 if prime, 0 if not prime
 */
int _prime_helper(int n, int divisor)
{
	/* If divisor squared > n, we've checked all possibilities */
	if (divisor * divisor > n)
	{
		return (1);
	}

	/* If n is divisible by divisor, it's not prime */
	if (n % divisor == 0)
	{
		return (0);
	}

	/* Otherwise, try the next divisor */
	return (_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if n is prime, 0 otherwise
 * @n: The number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	/* Numbers less than 2 are not prime */
	if (n < 2)
	{
		return (0);
	}

	/* Start checking from divisor 2 */
	return (_prime_helper(n, 2));
}
