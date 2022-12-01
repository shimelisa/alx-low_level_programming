#include "main.h"

/**
 * flip_bits - count #of bits required to be flipped in n to get m
 * @n: first number
 * @m: second number
 *
 * Return: #of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, i;

	for (i = 0; i < 8 * sizeof(n); i++)
		if (((n ^ m) >> i) & 1)
			count++;

	return (count);
}
