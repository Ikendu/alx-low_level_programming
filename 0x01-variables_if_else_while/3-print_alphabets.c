#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */

int main(void)
{
	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar(10);

	return (0);
}
