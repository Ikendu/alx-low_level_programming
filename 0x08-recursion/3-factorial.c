#include "main.h"
/**
 * factorial - shows the factorial of a number
 * @n: print factorila of n
 * Return: return factorila of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
