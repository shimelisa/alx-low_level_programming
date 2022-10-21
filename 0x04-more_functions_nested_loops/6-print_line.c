#include "main.h"

/**
* print_line - draws stright line in the terminal
* @n: integer indicating length of line
* Return: void
*/
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
	}
	_putchar('\n');
}
