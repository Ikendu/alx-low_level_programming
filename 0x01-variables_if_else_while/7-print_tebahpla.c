#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: return 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
