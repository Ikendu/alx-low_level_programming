#include "main.h"
/**
 * _isdigit - checkes if an entry is a digit
 * @c: an entry to determine
 *
 * Return: gives 1 is digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
