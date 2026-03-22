#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to print
 *
 * Return: Always void (nothing)
 */
void _print_rev_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		return;
	}

	/* Recursive case: go to the end first */
	_print_rev_recursion(s + 1);

	/* Then print current character (on the way back) */
	_putchar(*s);
}
