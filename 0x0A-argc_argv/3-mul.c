#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if exactly 2 arguments are provided (plus program name) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert string arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Calculate product */
	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
