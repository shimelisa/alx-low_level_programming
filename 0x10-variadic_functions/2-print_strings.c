#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings with given separator
 * @separator: String to separate printed string item
 * @n: Number of strings item passed to the function
 * @...: Variable number of strings passed functions
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	char *str;
	unsigned int i;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(st, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(st);
}
