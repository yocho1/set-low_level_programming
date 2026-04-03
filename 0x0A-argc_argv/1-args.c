#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Print the number of arguments (argc - 1 excludes program name) */
	printf("%d\n", argc - 1);

	/* Suppress unused parameter warning */
	(void)argv;

	return (0);
}
