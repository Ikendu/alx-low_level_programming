#include "3-calc.h"

/**
 * op_add - adds two integers.
 * @a: first int.
 * @b: second int.
 *
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two integers.
 * @a: first int.
 * @b: second int.
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two digit.
 * @a: first num.
 * @b: second num.
 *
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two digits
 * @a: first num.
 * @b: second num.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two digits.
 * @a: first int.
 * @b: second int.
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
