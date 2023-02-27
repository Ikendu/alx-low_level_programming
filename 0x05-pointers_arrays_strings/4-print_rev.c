#include "main.h"
/**
 * print_rev - prints string characters in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int x = 0, id;

	while (s[id++])
		x++;

	for (id = x - 1; id >= 0; id--)
		_putchar(s[id]);

	_putchar('\n');
}
