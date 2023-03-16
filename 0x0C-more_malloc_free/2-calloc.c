#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate array to function using malloc
 * @nmemb: number of items
 * @size: size of memory
 * Return: void or the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int i;

	if(nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ch[i] = 0;

	return (ch);
}
