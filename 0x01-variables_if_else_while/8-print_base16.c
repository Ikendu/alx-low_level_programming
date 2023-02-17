#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */

int main(void)
{
	int n;
	unsigned char a = '0';

	for (n = 0; n < 10; n++)
	{
		putchar(a);
		a++;
	}

	a = '1';

	for (n = 0; n < 6; n++)
	{
		putchar('0' + a);
		a++;
	}
	putchar(10);
	return (0);
}
