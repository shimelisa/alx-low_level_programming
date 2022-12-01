#include <unistd,h>
#include "main.h"

/**
 * _putchar - print char
 * @c: character to be printed
 *
 * Return: integer value of char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
