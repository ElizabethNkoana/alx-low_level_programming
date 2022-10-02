#include "main.h"

/**
 * print_square - print a square from character #
 * @size: the size of the square
 */

void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				putchar('#');
			}
			_putchar('\n')
		}
	}
	else
		_putchar('\n');
}
