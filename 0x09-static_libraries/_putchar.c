#include <unistd.h>
#include "main.h"

/**
* _putchar - print charcter
* @c: charcter to be printed
*
* Return: integer (writes char to stdout)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
