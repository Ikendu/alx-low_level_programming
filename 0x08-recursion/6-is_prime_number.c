#include "main.h"
/**
 * checker - checks the prime
 * @i: checker iterator
 * @n: checker number
 * Return: value
 */
int checker(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (checker(i + 1, n));
	return (1);
}
/**
 * is_prime_number - checks if prime or not
 * @n: digit to check
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (checker(i, n));
}
