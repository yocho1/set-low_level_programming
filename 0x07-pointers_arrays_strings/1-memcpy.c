#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Copy each of the n bytes from src to dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	/* Return pointer to the destination */
	return (dest);
}
