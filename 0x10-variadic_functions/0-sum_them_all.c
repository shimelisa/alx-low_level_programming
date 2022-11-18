#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all given paramters
 * @n: Number of arguments to the functions
 * @...: A variable number of integers
 *
 * Return: int (sum of given argumentes or parameters)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nn;
	unsigned int i;
	int sum = 0;

	va_start(nn, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nn, int);

	va_end(nn);
	return (sum);
}
