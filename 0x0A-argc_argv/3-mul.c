#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers,print the result of the multiplication.
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
