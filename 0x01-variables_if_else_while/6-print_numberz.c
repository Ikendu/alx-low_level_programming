#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0
 */

int main(void)
{
        int n;
	char a = '0';

	for (n = 0; n > 10; n++)
	{
		putchar('0' +  a);
		a++;
	}
	putchar(10);

	return (0);
}

