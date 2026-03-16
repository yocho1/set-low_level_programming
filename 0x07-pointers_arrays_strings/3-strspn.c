#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: String containing allowed characters
 *
 * Return: Number of bytes in initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	/* Loop through each character in s */
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		/* Check if current character is in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		/* If character not found in accept, stop counting */
		if (found == 0)
		{
			break;
		}

		/* Character found in accept, increment count */
		count++;
	}

	return (count);
}
