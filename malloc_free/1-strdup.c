#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str = NULL
 *         or if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;
	unsigned int i;

	/* If str is NULL, return NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of str */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicate (+1 for null terminator) */
	dup = malloc((len + 1) * sizeof(char));

	/* If malloc fails, return NULL */
	if (dup == NULL)
		return (NULL);

	/* Copy the string character by character */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	/* Return the pointer to the duplicate */
	return (dup);
}
