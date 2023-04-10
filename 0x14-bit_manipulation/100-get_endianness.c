#include "main.h"
/**
 * get_endianness - checks for endianess
 *
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int v;
	char *ch;

	v = 1;
	ch = (char *) &v;

	return ((int)*ch);
}
