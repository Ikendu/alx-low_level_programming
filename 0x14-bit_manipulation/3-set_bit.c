#include "main.h"

/**
 * set_bit - set the value value of bit to 1
 * @n: number to set
 * @index: the given index
 * Return: 1 on success or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ix;

	if (index > 63)
		return (-1);

	ix = 1 << index;
	*n = (*n | ix);

	return (1);
}
