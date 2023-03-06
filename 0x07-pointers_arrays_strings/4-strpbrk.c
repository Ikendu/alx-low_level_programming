#include "main.h"
/**
 * _strpbrk - searches the string for set of byte
 * @s: string for searching
 * @accept: accepting arrays
 *
 * Return: returns the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
