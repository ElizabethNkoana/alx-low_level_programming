#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program.
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
