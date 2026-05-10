#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated concatenated string,
 *         or NULL on failure
 */
char *str_concat(char *s1, char *s2)
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

	/* Allocate memory for s1 + s2 + null terminator */
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	/* If malloc fails, return NULL */
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy s2 into concat (continuing where s1 ended) */
	for (j = 0; j <= len2; j++)
		concat[i + j] = s2[j];

	/* Return the pointer to the concatenated string */
	return (concat);
}
