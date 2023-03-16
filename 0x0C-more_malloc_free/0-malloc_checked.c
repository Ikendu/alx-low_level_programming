#include "main.h"
/**
 * malloc_checked - checks for allocation of memory
 * @b: memory to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(b);
	return (p);
}
