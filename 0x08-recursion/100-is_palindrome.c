#include "main.h"
/**
 * lengthn - check length of string
 * @s: string to check
 * Return: the length of string
 */
int lengthn(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + lengthn(s + 1));
}
/**
 * comparen - checks each character
 * @s: string
 * @n: smaller iterator
 * @m: bigger iterator
 * Return: result
 */
int comparen(char *s, int n, int m)
{
	if (*(s + n) == *(s + m))
	{
		if (n == m || n == m + 1)
			return (1);
		return (0 + comparen(s, n + 1, m - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: returns 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparen(s, 0, lengthn(s) - 1));
}


