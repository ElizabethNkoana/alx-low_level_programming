#include <stdio.h>

/**
 * main - prints all arguments it receives, one argument per line.
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
