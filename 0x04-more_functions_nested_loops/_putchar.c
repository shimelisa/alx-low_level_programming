#include "main.h"
#include <unistd.h>
/**
* _putchar - writes char to std out
* @c: charcter input
* Return: integer
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
