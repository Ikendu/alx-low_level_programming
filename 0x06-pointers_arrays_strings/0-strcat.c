#include "main.h"
/**
 * _strcat - concatnates two strings
 *
 * @dest: contains destination string
 * @src: contains source string
 *
 * Return: returns destination 
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
