#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte to fill with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Fill each of the first n bytes with b */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	/* Return pointer to the memory area */
	return (s);
}
