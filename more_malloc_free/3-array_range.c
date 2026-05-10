#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	/* Calculate size: max - min + 1 */
	size = max - min + 1;

	/* Allocate memory */
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Fill array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
