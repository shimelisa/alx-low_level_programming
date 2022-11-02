#include "main.h"

/**
* calc_sqrt - calcuate square root of number
* @i: number to radical
* @j: square number to be checked
*
* Return: natuaral number or -1 (intiger)
*/
int calc_sqrt(int i, int j)
{
	if ((j * j) == i)
		return (j);
	if (j == i / 2)
		return (-1);
	return (calc_sqrt(i, j + 1));
}

/**
* _sqrt_recursion - calculate square toor of number
* @n: number to go under radical
*
* Return: natuaral number or -1 (intiger)
*/
int _sqrt_recursion(int n)
{
	int k = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (calc_sqrt(n, k));
}
