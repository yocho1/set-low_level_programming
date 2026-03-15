#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Return: Always void (nothing)
 */
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;
	int temp;

	/* Swap elements from both ends until they meet in the middle */
	while (left < right)
	{
		/* Swap a[left] and a[right] */
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		/* Move towards the middle */
		left++;
		right--;
	}
}
