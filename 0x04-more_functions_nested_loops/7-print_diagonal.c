#include "main.h"

/**
 * print_diagonal - dram a diagonal line
 * *@n: the number of times '\' char should be printed
 *
 */

void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n < 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		i--;
	}
	if (c < 1)
		_putchar('\n');
}
