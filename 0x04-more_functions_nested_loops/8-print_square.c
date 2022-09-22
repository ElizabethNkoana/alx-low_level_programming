#include "main.h"

/**
 * print_square - print a square from character #
 * @size: the size of the square
 */

void print_square(int size)
{
	int h, w, size;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
