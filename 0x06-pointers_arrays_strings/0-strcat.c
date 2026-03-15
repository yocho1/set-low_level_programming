#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy src to the end of dest */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add null terminator at the end */
	dest[dest_len + i] = '\0';

	/* Return pointer to dest */
	return (dest);
}
