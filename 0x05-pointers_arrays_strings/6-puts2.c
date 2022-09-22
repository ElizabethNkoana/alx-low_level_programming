#include "main.h"

/**
 * puts2 - prints every other character of a string;
 * @str: string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');

}
