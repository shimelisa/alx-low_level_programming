#include "main.h"

/**
 * get_bit - function to return value of a bit at a given index
 * @n: input long integer
 * @index: bit location to look for
 *
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index >= (8 * sizeof(n))) ? -1 : (int)(n >> index) & 1);
}

