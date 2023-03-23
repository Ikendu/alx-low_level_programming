#include "function_pointers.h"
/**
 * int_index - serches for an integer value
 * @array: array for searching
 * @size: num of elements in the array
 * @cmp: pointer to the function for comparing
 * return: index of element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
