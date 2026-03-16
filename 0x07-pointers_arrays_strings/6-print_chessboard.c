#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: 2D array representing the chessboard (8x8)
 *
 * Return: Always void (nothing)
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/* Loop through each row */
	for (row = 0; row < 8; row++)
	{
		/* Loop through each column in the current row */
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		/* Print new line after each row */
		_putchar('\n');
	}
}
