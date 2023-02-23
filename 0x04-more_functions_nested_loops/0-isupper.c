#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @c: Number for checking
 *
 * Return: 1 for upper letter or 0 for others cases
 */

int _isupper(int c)
{
	if (c >= 'A' && c <='Z')
	{
		return (1);
	}
	return (0);
}	
