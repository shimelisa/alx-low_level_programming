#include "function_pointers.h"

/**
 * int_index - Searches for integer in array
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to compare function
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
