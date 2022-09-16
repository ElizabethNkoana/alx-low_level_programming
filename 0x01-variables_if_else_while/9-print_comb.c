#include <stdio.h>
/**
 * main - print single digit numbers 1-9 separated by comma and space
 *
 * Description: by using the main function
 * this program prints "1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
	putchar(c);
	if (c != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
