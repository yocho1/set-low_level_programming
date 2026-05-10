#include "main.h"
#include <stdlib.h>

/**
 * get_length - calculates length of a string
 * @str: input string (can be NULL)
 *
 * Return: length of string (0 if NULL)
 */
unsigned int get_length(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * copy_string - copies a string into destination
 * @dest: destination pointer
 * @src: source string
 * @len: number of characters to copy
 *
 * Return: pointer to next position after copy
 */
char *copy_string(char *dest, char *src, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (dest + len);
}

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
	unsigned int len1, len2;

	/* Get lengths (treat NULL as empty) */
	len1 = get_length(s1);
	len2 = get_length(s2);

	/* If n >= length of s2, use whole s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory */
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy strings */
	copy_string(concat, s1, len1);
	copy_string(concat + len1, s2, n);
	concat[len1 + n] = '\0';

	return (concat);
}
