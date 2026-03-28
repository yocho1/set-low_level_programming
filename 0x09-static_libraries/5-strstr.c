#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to find
 *
 * Return: Pointer to beginning of located substring,
 *         or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* If needle is empty, return haystack (as per standard strstr) */
	if (*needle == '\0')
	{
		return (haystack);
	}

	/* Loop through haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Check if current position could be the start of needle */
		if (haystack[i] == needle[0])
		{
			/* Compare characters from here with needle */
			for (j = 1; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			{
				/* Continue comparing */
			}

			/* If we reached the end of needle, we found a match */
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	/* No match found */
	return (NULL);
}
