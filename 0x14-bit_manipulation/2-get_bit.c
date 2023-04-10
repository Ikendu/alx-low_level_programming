#include "main.h"

/**
 * get_bit - returns value of bit at index
 * @n: number to convert
 * @index: index to use for conversion
 * Return: value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;

	if (n == 0 && index < 64)
		return (0);

	for (len = 0; len <= 63; n >>= 1, len++)
	{
		if (index == len)
		{
			return (n & 1);
		}
	}

	return (-1);
}
