#include "main.h"
/**
 * _pow_recursion - returns the raise to power of num
 * @x: number
 * @y: power
 * Return: result of exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
