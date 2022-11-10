#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in the array
 * @max: maximum int in the array
 *
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *i;
	int j, k;

	if (min > max)
		return (NULL);

	k = (max - min) + 1;
	i = malloc(k * sizeof(*i));

	if (i == NULL)
		return (NULL);
	for (j = 0; j < k && min <= max; j++, min++)
		*(i + j) = min;
	return (i);
}
