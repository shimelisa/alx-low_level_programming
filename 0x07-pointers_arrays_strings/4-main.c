#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *k = "gud fella";
	char *f = "world";
	char *t;
	char *y;

	t = _strpbrk(s, f);
	printf("%s\n", t);

	y = _strpbrk(k, f);
	printf("%s\n", y);

	return (0);
}
