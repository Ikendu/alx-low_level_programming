#include "main.h"
/**
 * _strstr - search for string
 * @haystack: string to search in
 * @needle: char to locate
 *
 * Return: a string gotten or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
		if (needle[j] == '\0')
			return (haystack + i);
		}
	}
	return ('\0');
}

