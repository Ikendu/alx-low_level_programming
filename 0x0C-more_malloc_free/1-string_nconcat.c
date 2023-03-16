#include "main.h"
#include <stdlib.h>

/**
 * char string_nconcat - joins strings together
 * @s1: first string
 * @s2: second string
 * @n: amonut of memory in byte
 * Return: a character variable
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s2[y] != '\0')
		y++;
	while (s1[x] != '\0')
		x++;
	if (n >= y)
		n = y;
	s = malloc(sizeof(char) * n + x + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		s[1] = s1[i];

	for (i = 0; i < n; i++)
		s[i + x] = s2[i];

	s[i + x] = '\0';

	return (s);
}
