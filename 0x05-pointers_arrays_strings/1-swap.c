#include "main.h"
/**
 * swap_int - swaps values using pointers
 *
 * @a: first value for swapping
 * @b: second number for replacement
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
