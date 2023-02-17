#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always return 0
 *
 * program that print output randomly
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf(" is zero\n");
	else
		printf("is negative\n");

	return (0);
}


