#include <stdio.h>
#include "main.h"
/**
* print_array - print indicated number of arrays
* @a: array of integers
* @n: number of char to be printed
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
