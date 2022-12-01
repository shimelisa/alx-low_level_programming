#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0- if big & 1- if little endiannese
 */
int get_endianness(void)
{
	int n = 1;
	char *e = (char *)&n;

	if (*e == 1)
		return (1);

	return (0);
}
