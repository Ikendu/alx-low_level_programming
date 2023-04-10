#include "main.h"
/**
 * clear_bit - sets the value of bit to 0
 * @n: number to set
 * @index: index to use in setting
 * Return: 1 if worked or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nx;

	if (index > 63)
		return (-1);

	nx = 1 << index;

	if (*n & nx)
		*n ^= nx;

	return (1);
}
