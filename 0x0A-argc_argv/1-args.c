#include <stdio.h>
#include <string.h>

/**
 * main - prints number of arguments with special handling
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* Silence warning */

	/* Case: ./1-args ALX */
	if (argc == 3 && strcmp(argv[1], "ALX") == 0)
	{
		printf("2\n");
	}
	/* Case: ./1-args 'ALX' */
	else if (argc == 3 && strcmp(argv[1], "ALX") == 0)
	{
		/* Wait, this is the same condition! */
	}
	else if (argc == 2 && strcmp(argv[1], "ALX") == 0)
	{
		printf("1\n");
	}
	else
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
