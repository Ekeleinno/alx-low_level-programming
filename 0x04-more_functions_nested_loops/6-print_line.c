#include "main.h"
/**
 * print_line - prints a lines
 *
 * @n: integer to print line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
