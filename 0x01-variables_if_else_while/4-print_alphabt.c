#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */

int main(void)
{
        int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
		if (ch == 'q' && ch == 'e')
		{
			continue;
		}
                putchar(ch);
        }
        
        putchar(10);

        return (0);
}
