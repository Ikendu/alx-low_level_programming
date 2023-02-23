#include "main.h"
/**
 * _isupper - checks if uppercase is enterd
 * @c: character to check
 *
 * Return: retuns 1 if Upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
