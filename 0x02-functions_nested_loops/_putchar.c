#include "main"
#include <unistd.h>
/**
* main - I don't know
*
* Return: Always 0
*_putchar - writes char to stdout
*/
int _putchar(char c)
{
	return (write (1, &c, 1));
}
