#include "main.h"
/**
 * _memcpy - copies items from src to dest
 * @dest: the destination
 * @src: the source
 * @n: number of rounds
 *
 * Return: returns the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
