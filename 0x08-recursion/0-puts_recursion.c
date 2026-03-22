#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to print
 *
 * Return: Always void (nothing)
 */
void _puts_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print current character */
	_putchar(*s);

	/* Recursive case: move to next character */
	_puts_recursion(s + 1);
}
