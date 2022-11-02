#include "main.h"
#include <unistd.h>

/**
* _putchar - writes char to stdout
* @c: charcter or string input
*
* Return: integer (one charcter)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
