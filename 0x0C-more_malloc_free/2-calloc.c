#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements to allocate
 * @size: size of bytes to allocate
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ch[i] = 0;

	return (ch);
}
