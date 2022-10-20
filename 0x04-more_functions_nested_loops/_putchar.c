#include "main"
#include <unistd.h>
#include <unisted.h>
/**
* _putchar - writes char to std out
* @c: charcter input
* Return: integer
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
