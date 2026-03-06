#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string to print
 *
 * Return: Always void (nothing)
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
