#include "main.h"
/**
* main - main program
* Return: always 0
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

	return (0);
}	
