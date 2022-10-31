#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";
/*	int n = 98; */
/*	int *p = &n; */

	printf("%s, %s\n", s0, s1);

	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
/*	printf("%i, %p\n", p, p); */

	return (0);
}
