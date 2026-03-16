#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the flattened matrix (int *)
 * @size: Size of the matrix (size x size)
 *
 * Return: Always void (nothing)
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;  /* Main diagonal sum */
	long int sum2 = 0;  /* Secondary diagonal sum */

	/* Loop through each row */
	for (i = 0; i < size; i++)
	{
		/* Main diagonal: element at [i][i] */
		sum1 += a[i * size + i];

		/* Secondary diagonal: element at [i][size-1-i] */
		sum2 += a[i * size + (size - 1 - i)];
	}

	/* Print the sums in the required format */
	printf("%ld, %ld\n", sum1, sum2);
}
