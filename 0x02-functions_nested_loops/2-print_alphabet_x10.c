#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always void (nothing)
 */
void print_alphabet_x10(void)
{
	char letter;
	int line;

	for (line = 0; line < 10; line++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
