#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints out given numbers
 * @separator: string to seperate given numbers when printed
 * @n: number of parameters/args to function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nn;
	unsigned int i;

	va_start(nn, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nn, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nn);
	printf("\n");
}
