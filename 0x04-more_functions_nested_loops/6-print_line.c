#include "main.h"
/**
 * print_line - prints a striaght line
 *
 * @n: integer for print indication
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
