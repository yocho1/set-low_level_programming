#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - simple crackme program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <password>\n", argv[0]);
        return (1);
    }

    /* The password is stored here */
    if (strcmp(argv[1], "alx_crackme4") == 0)
    {
        printf("OK\n");
        return (0);
    }

    printf("Wrong password\n");
    return (1);
}
