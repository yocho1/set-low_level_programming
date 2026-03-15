#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak)
 * @str: The string to encode
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	/* Loop through each character of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Loop through each letter to check for matches */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* If current character matches a letter to replace */
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];  /* Replace with corresponding number */
				break;  /* Exit inner loop once replaced */
			}
		}
	}

	return (str);
}
