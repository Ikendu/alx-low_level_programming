#include "main.h"

/**
 * _islower - main function
 *
 * Return: 0 or 1
 *
 * @c: The char to be checked
 *
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
