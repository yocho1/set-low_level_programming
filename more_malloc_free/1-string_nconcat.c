#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, using n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 *
 * Return: pointer to new concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* If n >= length of s2, use whole s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for s1 + n bytes of s2 + null terminator */
	concat = malloc((len1 + n + 1) * sizeof(char));

	/* Check if malloc failed */
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy n bytes from s2 into concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/* Add null terminator */
	concat[i + j] = '\0';

	return (concat);
}
