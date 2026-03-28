#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	/* Loop through the string until we find c or reach the end */
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);  /* Return pointer to the character */
		}
		i++;
	}

	/* Check if we're looking for the null terminator */
	if (c == '\0')
	{
		return (&s[i]);  /* Return pointer to the null terminator */
	}

	/* Character not found */
	return (NULL);
}
