#include "main.h"

/**
 * puts_half - Prints half of a string (second half)
 * @str: Pointer to the string to print
 *
 * Return: Always void (nothing)
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
