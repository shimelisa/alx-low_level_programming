#include "main.h"
#include "stdio.h"
/**
* print_to_98 - Print number b/n given number and 98
* @n: given integer
* Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
		for ( ; n < 98; n++)
			printf("%d, ", n);
	else if (n > 99)
		for ( ; n > 98; n--)
			printf("%d, ", n);
	printf("%d\n", n);
}
