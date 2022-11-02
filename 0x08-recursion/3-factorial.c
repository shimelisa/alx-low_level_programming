#include "main.h"

/**
* factorial - calculate factorial of given number
* @n: input number
*
* Return: integer
*/
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
