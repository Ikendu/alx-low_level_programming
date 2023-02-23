#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @x: Number for checking
 *
 * Return: 1 for upper letter or 0 for others cases
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}	
