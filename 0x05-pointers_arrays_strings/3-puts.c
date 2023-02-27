#include "main.h"
/**
 * _puts - prints strings to output
 *
 * @str: the string to output
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
