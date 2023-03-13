#include "main.h"
#include <stdlib.h>
/**
 * create_array - creat array of charater
 * @size: length of character
 * @c: the character to print
 * Return: the character of NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
