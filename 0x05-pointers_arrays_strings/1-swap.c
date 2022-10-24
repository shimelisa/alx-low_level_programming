#include <stdio.h>
#include "main.h"
/**
* swap_int - swap the value of two integers
* @a: first integer to be swappeed
* @b: second ineger to be swapped
* Return: void
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
