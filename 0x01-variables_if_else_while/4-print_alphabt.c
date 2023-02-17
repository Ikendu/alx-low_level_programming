#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Return 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}

	return (0);
}
