#include "main.h"
/**
* main - main program
* Description: print lower case alphabet
* Return: void
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
