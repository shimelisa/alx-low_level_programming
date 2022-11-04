#include <unistd.h>
#include "main.h"

/**
* _putchar - print charcter
* @c: character to be printed
*
* Return: integer
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
