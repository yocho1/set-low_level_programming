#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: String containing bytes to look for
 *
 * Return: Pointer to the byte in s that matches a byte in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* Loop through each character in s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if current character matches any in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);  /* Return pointer to matching character */
			}
		}
	}

	/* No match found */
	return (NULL);
}
