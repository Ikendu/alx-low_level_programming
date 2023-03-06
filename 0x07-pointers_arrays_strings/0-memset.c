#include "main.h"
/**
 * _memset - set memory to take array contents
 * @s: the array
 * @b: the value
 * @n: n number of times
 *
 * Return: character value to return
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
