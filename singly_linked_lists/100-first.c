#include <stdio.h>

/**
 * print_before_main - prints a message before main executes
 *
 * This function is marked with the constructor attribute,
 * which causes it to be executed automatically before main()
 */
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
