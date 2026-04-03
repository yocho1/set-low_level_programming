#include <stdio.h>

/**
 * main - prints the number of arguments passed to it (excluding program name)
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
