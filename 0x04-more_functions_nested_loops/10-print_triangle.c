#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using '#'
 * @size: The size of the triangle
 *
 * Return: Always void (nothing)
 */
void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (hashes = 0; hashes < row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
