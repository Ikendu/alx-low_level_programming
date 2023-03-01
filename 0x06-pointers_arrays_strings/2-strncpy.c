#include "main.h"
/**
 * _strncpy - copies string
 *
 * @dest: the destination of the string
 * @src: the source string
 * @n: number of places to copy to
 *
 * Return: vale of the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
