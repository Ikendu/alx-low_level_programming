#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Emtry point of program
 *
 * Return: return 0
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	 lastd = n % 10;

	if (lastd  > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less that 6 and not 0\n", n, lastd);
	}

	return (0);
}



