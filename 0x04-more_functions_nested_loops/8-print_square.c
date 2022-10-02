#include "main.h"

/**
 * print_square - print a square from character #
 * @size: the size of the square
 */

void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			_putchar('#'
			for (w = 2; w <= size; w++)
			{
				putchar('#');
			}
			_putchar('\n')
		}
	}
}
