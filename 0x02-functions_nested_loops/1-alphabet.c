#include "main.h"
/**
* print_alphabet - Entry point
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
