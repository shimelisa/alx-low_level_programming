#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a char arguments
 * @arg: A list of arguments pointing to char
 *
 * Return: void
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Print integer arguments
 * @arg: A list of arguments pointing to int
 *
 * Return: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float arguments
 * @arg: A list of arguments pointing to float
 * Return: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string arguments
 * @arg: A list of arguments pointing to string
 *
 * Return: void
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints arguments with any datatype
 * @format: String of characters representing argument types
 * @...: A variable number of arguments to be printed.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
