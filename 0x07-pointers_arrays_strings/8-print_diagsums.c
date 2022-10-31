#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sum of two diagonals of square martix
* @a: square array/matrix
* @size: size of square array/matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, j = size * size, diag1 = 0, diag2 = 0;

	for (i = 0; i < j; i += (size + 1))
	{
		diag1 += a[i];
	}

	for (i = size - 1; i < (j - 1); i += (size - 1))
	{
		diag2 += a[i];
	}

	printf("%d, %d\n", diag1, diag2);
}
