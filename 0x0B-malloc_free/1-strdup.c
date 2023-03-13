#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: string for pointer
 * Return: Null of duplicate
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	dup = malloc(sizeof(char) * (i + 1));
	
	if (dup == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dup[j] = str[j];

	return (dup);
}
