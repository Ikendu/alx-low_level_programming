#include "main.h"

/**
 * binary_to_uint - converts binary num to an int
 * @b: a pointer to a string of 0 and 1
 * Return: the converted number, or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ix;
	int count, base2;

	if (!b)
		return (0);

	ix = 0;

	for (count = 0; b[count] != '\0'; count++)
		;

	for (count--, base2 = 1; count >= 0; count--, base2 *= 2)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}

		if (b[count] & 1)
		{
			ix += base2;
		}
	}

	return (ix);
}
