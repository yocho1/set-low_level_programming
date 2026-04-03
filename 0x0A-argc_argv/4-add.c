#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	/* Check each character in the string */
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* If no numbers passed, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through all arguments (skip argv[0] which is program name) */
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument contains only digits */
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		/* Add the number to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);

	return (0);
}
