#include "main.h"
/**
 * _strncat - concats two arrays
 * @dest: the destination
 * @src: the source array
 * @n: amount of times to append
 *
 * Return: char value to return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
