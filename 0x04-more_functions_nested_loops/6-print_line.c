#include "main.h"

/**
 * print_line - draws a straight line in the using the character __.
 * @n: The number of _ characters to be printed out.
 *
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
