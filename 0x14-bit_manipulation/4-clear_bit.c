#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: pointer to number
 * @index: bit location to change
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(*n))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
