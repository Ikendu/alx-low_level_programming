#include "main.h"
/**
 * *_strcpy - coppies string output to string buffer
 * @dest: the buffer to take string
 * @src: the source string
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		src[index] = dest[index];
		index++;
	}

	return (dest);
}
