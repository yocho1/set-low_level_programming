#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to reverse
 *
 * Return: Always void (nothing)
 */
void rev_string(char *s)
{
	int length = 0;
	int left, right;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	left = 0;
	right = length - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
