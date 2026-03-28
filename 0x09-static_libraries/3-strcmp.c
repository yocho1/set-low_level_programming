#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Negative if s1 < s2, 0 if equal, Positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop while both strings have characters and they are equal */
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	/* Return the difference at the first differing character */
	return (s1[i] - s2[i]);
}
